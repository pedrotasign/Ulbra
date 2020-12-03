<?php 

namespace App\Models;
use CodeIgniter\Model;


class ClientsModel extends Model{
    
  protected $table ='clients';
  protected $primaryKey = 'idClient';
  protected $returnType = 'array';
  protected $allowedFields = [
        'name','phone','email','address'
  ];
  public function getClients($idClient = null){
      
    if($idClient == null):
      return $this->findAll();
    else:
        return $this -> find($idClient);
    endif;
  
  }


  public function consulta($consulta){
    return $this -> asArray()
    
    ->like('idClient', "%{$consulta}%")
    ->orLike('name', "%{$consulta}%")
    ->orLike('phone', "%{$consulta}%")
    ->orLike('email', "%{$consulta}%")
    ->orLike('address', "%{$consulta}%")
    ->findAll();
  }
}