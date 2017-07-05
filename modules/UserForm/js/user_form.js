function insert_customers() {

    var name = $("#name").val();
    var lastname = $("#lastname").val();
    var email = $("#email").val();
    var phone = $("#phone").val();
    var age = $("#age").val();
    var country = $("#country").val();
    var gender = $('input[name=gender]:checked').val();
    var subscribed = $("#subscribed").val();
    
  

    $.ajax({
        url: "index.php",
        type: "post",
        data: {action: 'add_user', name: name, lastname: lastname, email: email, phone: phone, age: age, country: country, gender: gender, subscribed: subscribed},
        success: function (response) {        
            location.reload();
        },
        error: function (jqXHR, textStatus, errorThrown) {
            console.log(textStatus, errorThrown);
        }


    });
}

