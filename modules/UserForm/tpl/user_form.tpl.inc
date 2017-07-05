<script src="<?php echo WEB_ROOT ?>modules/UserForm/js/user_form.js"></script>
<div class="container" style="margin-left: 40px;">

    <div class="row">
        <h1>User form</h1>

        <form  method="post" id="user-form" class="form-horizontal" accept-charset="UTF-8" role="form" action="">
            <div class="container">

                <div class="col-sm-6">
                    <div class="form-group">
                        <label class="col-sm-3 control-label">Name</label>
                        <div class="col-sm-9">
                            <input type="text" id="name" name="name" class="form-control">
                        </div>
                    </div>


                    <div class="form-group">
                        <label class="col-sm-3 control-label">Last Name</label>
                        <div class="col-sm-9">
                            <input type="text" id="lastname" name="lastname" class="form-control" >
                        </div>
                    </div>

                    <div class="form-group">
                        <label class="col-sm-3 control-label">Email</label>
                        <div class="col-sm-9">
                            <input type="email" id="email" name="email" class="form-control">
                        </div>
                    </div>

                    <div class="form-group">
                        <label class="col-sm-3 control-label">Phone</label>
                        <div class="col-sm-9">
                            <input type="text" id="phone" name="phone" class="form-control">
                        </div>
                    </div>

                </div>

                <div class="col-sm-6">

                    <div class="form-group">
                        <label class="col-sm-3 control-label">Age</label>
                        <div class="col-sm-9">
                            <input type="number" id="age" name="age" class="form-control">
                        </div>
                    </div>

                    <div class="form-group">
                        <label class="col-sm-3 control-label">Country</label>
                        <div class="col-sm-9">
                            <select class="form-control" id="country" name="country">
                                <option value="BG">Bulgaria</option>
                                <option value="ES">Spain</option>
                                <option value="DE">Germany</option>
                                <option value="FR">France</option>
                                <option value="UK">United Kingdom</option>
                                <option value="IT">Italy</option>
                            </select>
                        </div>
                    </div>

                    <div class="form-group">
                        <label class="col-sm-3 control-label">Gender</label>
                        <div class="col-sm-9">
                            <div class="radio">
                                <label>
                                    <input type="radio" name="gender" value="F">
                                    Female
                                </label>
                            </div>
                            <div class="radio">
                                <label>
                                    <input type="radio" name="gender" value="M">
                                    Male
                                </label>
                            </div>
                        </div>
                    </div>
                    <div class="form-group">
                        <div class="col-sm-offset-3 col-sm-9">
                            <div class="checkbox">
                                <label>
                                    <input name="subscribed" id="subscribed" type="checkbox" value="1"> Subscribed
                                </label>
                            </div>
                        </div>
                    </div>

                </div>

                <div class="row">
                    <div class="col-sm-offset-5 col-sm-5">
                        <button type="button" name="add" class="btn btn-primary" onclick="insert_customers()">Add User</button>
                    </div>
                </div>
        </form>                  

        <br /><br />
    </div>
</div>

<script type="text/javascript">

  $(document).ready(function () {
      $('#user-form').bootstrapValidator({
          // To use feedback icons, ensure that you use Bootstrap v3.1.0 or later
          feedbackIcons: {
              valid: 'glyphicon glyphicon-ok',
              invalid: 'glyphicon glyphicon-remove',
              validating: 'glyphicon glyphicon-refresh'
          },
          fields: {
              name: {
                  validators: {
                      stringLength: {
                          min: 2,
                      },
                      notEmpty: {
                          message: 'Please supply name'
                      }
                  }
              },
              lastname: {
                  validators: {
                      stringLength: {
                          min: 2,
                      },
                      notEmpty: {
                          message: 'Please supply last name'
                      }
                  }
              },
              email: {
                  validators: {
                      notEmpty: {
                          message: 'Please supply email'
                      }
                  }
              },
              phone: {
                  validators: {
                      notEmpty: {
                          message: 'Please supply phone'
                      }
                  }
              },
              age: {
                  validators: {
                      notEmpty: {
                          message: 'Please supply age'
                      }
                  }
              },
              country: {
                  validators: {
                      notEmpty: {
                          message: 'Please supply contry'
                      }
                  }
              },
              gender: {
                  validators: {
                      notEmpty: {
                          message: 'Please supply gender'
                      }
                  }
              },
              subscribed: {
                  validators: {
                      notEmpty: {
                          message: 'Please check subscribed'
                      }
                  }
              }
          }
      })
              .on('success.form.bv', function (e) {
                  alert(e);
                  $('#success_message').slideDown({opacity: "show"}, "slow") // Do something ...
                  $('#user-form').data('bootstrapValidator').resetForm();

                  // Prevent form submission
                  e.preventDefault();

                  // Get the form instance
                  var $form = $(e.target);

                  // Get the BootstrapValidator instance
                  var bv = $form.data('bootstrapValidator');

                  // Use Ajax to submit form data
                  $.post($form.attr('action'), $form.serialize(), function (result) {
                      console.log(result);
                  }, 'json');
              });
  });

</script>
