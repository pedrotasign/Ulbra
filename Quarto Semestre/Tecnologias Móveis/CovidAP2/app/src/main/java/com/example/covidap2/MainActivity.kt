package com.example.covidap2

import android.os.AsyncTask
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.Toast
import androidx.recyclerview.widget.LinearLayoutManager
import kotlinx.android.synthetic.main.activity_main.*


class MainActivity : AppCompatActivity() {

    private  var  asyncTask : TaskCovid? =null
    private var boletinsList = mutableListOf<Boletim>()
    private var adapter = Adapter(boletinsList)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        carregar()
        initRecyclerView()
    }

    fun carregar(){
        if (boletinsList.isNotEmpty()){
            showProgress(false)
        }else{
            if(asyncTask==null){
                if (ConnectHttp.hasConnection(this)){
                    download()
                }else{
                    progressBar.visibility =View.GONE
                    txtMsg.text = "Erro"
                }
            }else if(asyncTask?.status == AsyncTask.Status.RUNNING){
                showProgress(true)
            }
        }
    }
    override fun onOptionsItemSelected(item: MenuItem) = when (item.itemId) {
        R.id.menu_refresh -> {

            Toast.makeText(this,"Carregando...",Toast.LENGTH_LONG).show()
            carregar()

            true
        }

        else -> {
            super.onOptionsItemSelected(item)
        }
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.menu,menu)
        return super.onCreateOptionsMenu(menu)
    }

    private fun initRecyclerView(){
        rvDados.adapter=adapter
        val layoutManager = LinearLayoutManager(this)
        rvDados.layoutManager=layoutManager
    }


    private fun download(){
        if (asyncTask?.status!=AsyncTask.Status.RUNNING){
            asyncTask =TaskCovid()
            asyncTask?.execute()
        }
    }
    private fun update(result: List<Boletim>?){
        if (result!=null){
            boletinsList.clear()
            boletinsList.addAll(result.reversed())
        }else{
            txtMsg.text = "Erro ao carregar"
        }
        adapter.notifyDataSetChanged()
        asyncTask=null
    }

    fun showProgress(show: Boolean){
        if(show){
            txtMsg.text= "Carregando...."
        }
        txtMsg.visibility =if (show) View.VISIBLE else View.GONE
        progressBar.visibility =if (show) View.VISIBLE else View.GONE
    }

    inner class TaskCovid: AsyncTask<Void, Void, List<Boletim>?>() {
        override fun onPreExecute() {
            super.onPreExecute()
            showProgress(true)
        }

        override fun doInBackground(vararg p0: Void?): List<Boletim>? {
            return ConnectHttp.loadBoletim()
        }

        override fun onPostExecute(bo: List<Boletim>?) {
            super.onPostExecute(bo)
            showProgress(false)
            update(bo)
        }
    }
}
