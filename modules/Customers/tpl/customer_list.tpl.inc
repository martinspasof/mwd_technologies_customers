<div class="container">
    <h2>Book List</h2>
    
    <table id="customers_list_table" class="table">
        <thead>
            <tr>
          <th>Name</th>
          <th>Lastname</th>
          <th>Email</th>
          <th>Phone</th>
          <th>Age</th>
          <th>Country</th>
          <th>Gender</th>
          <th>Subscribed</th>
            </tr>
        </thead>
        
        <tbody>      
            <?php
            foreach ($this->get('get_customers') as $key => $data) {              ?>
              <tr id="<?= 'customer_' . $data['name']; ?>">
                  <td><?= $data['name']; ?></td>
                  <td><?= $data['lastname']; ?></td>
                  <td><?= $data['email']; ?></td>
                  <td><?= $data['phone']; ?></td>
                  <td><?= $data['age']; ?></td>
                  <td><?= $this->get('country')[$data['country']]; ?></td>
                  <td><?= $data['gender'] == 'M' ? 'Male':'Female'; ?></td>
                  <td><span class="label label-primary"><?= ($data['subscribed'] == 1) ? 'Yes' : 'No'; ?></span></td>
              </tr>
    <?php } ?>
        </tbody>
    </table>
</div>
<script>
  $(document).ready(function () {

      // DataTable
      var table = $('#customers_list_table').DataTable({"bPaginate": true}, {"bSortable": false});

 
  });
</script>