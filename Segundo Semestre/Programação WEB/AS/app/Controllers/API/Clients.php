<?php

namespace App\Controllers\Api;

use CodeIgniter\Controller;
use App\Models\ClientsModel;

    class Clients extends Controller{

        public function listClients()
        {
            $clients = new ClientsModel();

            $data = [
                'clients' => $clients->getClients()

            ];

            return json_encode($data);
        }
    }
