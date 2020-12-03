<?php

namespace App\Controllers\Admin;

use CodeIgniter\Controller;
use App\Models\ClientsModel;

class Clients extends Controller
{


    public function listClients()
    {
        $clients = new ClientsModel();
        
        $consulta = $this-> request -> getVar();
       

        if(isset ($consulta['consulta'])){
            $data = [
                'clients' => $clients-> consulta($consulta['consulta'])
            ];
        }else{
        
            $data = [
                'clients' => $clients->findAll()   
            ];
        }
        
        echo view('admin/templates/header');
        echo view('admin/clients/list', $data);
        echo view('admin/templates/footer');
    }
    
    public function detailsClients($idClient)
    {

        $clients = new ClientsModel();

        $data = [
            'client' => $clients->getClients($idClient)
        ];

        echo view('admin/templates/header');
        echo view('admin/clients/details', $data);
        echo view('admin/templates/footer');
    }

    public function insert()
    {
        echo view('admin/templates/header');
        echo view('admin/clients/insert');
        echo view('admin/templates/footer');
    }

    public function insertAction()
    {
        $clients = new ClientsModel();
        $data = [
            'name' => $this->request->getvar('name'),
            'email' => $this->request->getvar('email'),
            'phone' => $this->request->getvar('phone'),
            'address' => $this->request->getvar('address')
        ];
        $clients->insert($data);
        return redirect()->route('admin/clients');
    }

    public function update($id)
    {
        $clients = new ClientsModel();

        $data = [
            'client' => $clients->getClients($id)

        ];

        echo view('admin/templates/header');
        echo view('admin/clients/update', $data);
        echo view('admin/templates/footer');
    }

    public function updateAction($id)
    {
        $clients = new ClientsModel();
        $data = [
            'name' => $this->request->getvar('name'),
            'email' => $this->request->getvar('email'),
            'phone' => $this->request->getvar('phone'),
            'address' => $this->request->getvar('address')
        ];

        $clients->update($id, $data);
        return redirect()->route('admin/clients');
    }
    
    public function delete($id)
    {
        $clients = new ClientsModel();
        $clients->delete($id);
        return redirect()->route('admin/clients');
    }
}
