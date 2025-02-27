// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_sms_recovery:action/SmsRecovery.idl
// generated code does not contain a copyright notice
#include "nav2_sms_recovery/action/detail/sms_recovery__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
nav2_sms_recovery__action__SmsRecovery_Goal__init(nav2_sms_recovery__action__SmsRecovery_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    nav2_sms_recovery__action__SmsRecovery_Goal__fini(msg);
    return false;
  }
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_Goal__fini(nav2_sms_recovery__action__SmsRecovery_Goal * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

nav2_sms_recovery__action__SmsRecovery_Goal *
nav2_sms_recovery__action__SmsRecovery_Goal__create()
{
  nav2_sms_recovery__action__SmsRecovery_Goal * msg = (nav2_sms_recovery__action__SmsRecovery_Goal *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_sms_recovery__action__SmsRecovery_Goal));
  bool success = nav2_sms_recovery__action__SmsRecovery_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_sms_recovery__action__SmsRecovery_Goal__destroy(nav2_sms_recovery__action__SmsRecovery_Goal * msg)
{
  if (msg) {
    nav2_sms_recovery__action__SmsRecovery_Goal__fini(msg);
  }
  free(msg);
}


bool
nav2_sms_recovery__action__SmsRecovery_Goal__Sequence__init(nav2_sms_recovery__action__SmsRecovery_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_sms_recovery__action__SmsRecovery_Goal * data = NULL;
  if (size) {
    data = (nav2_sms_recovery__action__SmsRecovery_Goal *)calloc(size, sizeof(nav2_sms_recovery__action__SmsRecovery_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_sms_recovery__action__SmsRecovery_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_sms_recovery__action__SmsRecovery_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_Goal__Sequence__fini(nav2_sms_recovery__action__SmsRecovery_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_sms_recovery__action__SmsRecovery_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_sms_recovery__action__SmsRecovery_Goal__Sequence *
nav2_sms_recovery__action__SmsRecovery_Goal__Sequence__create(size_t size)
{
  nav2_sms_recovery__action__SmsRecovery_Goal__Sequence * array = (nav2_sms_recovery__action__SmsRecovery_Goal__Sequence *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_sms_recovery__action__SmsRecovery_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_sms_recovery__action__SmsRecovery_Goal__Sequence__destroy(nav2_sms_recovery__action__SmsRecovery_Goal__Sequence * array)
{
  if (array) {
    nav2_sms_recovery__action__SmsRecovery_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `total_elapsed_time`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
nav2_sms_recovery__action__SmsRecovery_Result__init(nav2_sms_recovery__action__SmsRecovery_Result * msg)
{
  if (!msg) {
    return false;
  }
  // total_elapsed_time
  if (!builtin_interfaces__msg__Duration__init(&msg->total_elapsed_time)) {
    nav2_sms_recovery__action__SmsRecovery_Result__fini(msg);
    return false;
  }
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_Result__fini(nav2_sms_recovery__action__SmsRecovery_Result * msg)
{
  if (!msg) {
    return;
  }
  // total_elapsed_time
  builtin_interfaces__msg__Duration__fini(&msg->total_elapsed_time);
}

nav2_sms_recovery__action__SmsRecovery_Result *
nav2_sms_recovery__action__SmsRecovery_Result__create()
{
  nav2_sms_recovery__action__SmsRecovery_Result * msg = (nav2_sms_recovery__action__SmsRecovery_Result *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_sms_recovery__action__SmsRecovery_Result));
  bool success = nav2_sms_recovery__action__SmsRecovery_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_sms_recovery__action__SmsRecovery_Result__destroy(nav2_sms_recovery__action__SmsRecovery_Result * msg)
{
  if (msg) {
    nav2_sms_recovery__action__SmsRecovery_Result__fini(msg);
  }
  free(msg);
}


bool
nav2_sms_recovery__action__SmsRecovery_Result__Sequence__init(nav2_sms_recovery__action__SmsRecovery_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_sms_recovery__action__SmsRecovery_Result * data = NULL;
  if (size) {
    data = (nav2_sms_recovery__action__SmsRecovery_Result *)calloc(size, sizeof(nav2_sms_recovery__action__SmsRecovery_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_sms_recovery__action__SmsRecovery_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_sms_recovery__action__SmsRecovery_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_Result__Sequence__fini(nav2_sms_recovery__action__SmsRecovery_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_sms_recovery__action__SmsRecovery_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_sms_recovery__action__SmsRecovery_Result__Sequence *
nav2_sms_recovery__action__SmsRecovery_Result__Sequence__create(size_t size)
{
  nav2_sms_recovery__action__SmsRecovery_Result__Sequence * array = (nav2_sms_recovery__action__SmsRecovery_Result__Sequence *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_sms_recovery__action__SmsRecovery_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_sms_recovery__action__SmsRecovery_Result__Sequence__destroy(nav2_sms_recovery__action__SmsRecovery_Result__Sequence * array)
{
  if (array) {
    nav2_sms_recovery__action__SmsRecovery_Result__Sequence__fini(array);
  }
  free(array);
}


bool
nav2_sms_recovery__action__SmsRecovery_Feedback__init(nav2_sms_recovery__action__SmsRecovery_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_Feedback__fini(nav2_sms_recovery__action__SmsRecovery_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

nav2_sms_recovery__action__SmsRecovery_Feedback *
nav2_sms_recovery__action__SmsRecovery_Feedback__create()
{
  nav2_sms_recovery__action__SmsRecovery_Feedback * msg = (nav2_sms_recovery__action__SmsRecovery_Feedback *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_sms_recovery__action__SmsRecovery_Feedback));
  bool success = nav2_sms_recovery__action__SmsRecovery_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_sms_recovery__action__SmsRecovery_Feedback__destroy(nav2_sms_recovery__action__SmsRecovery_Feedback * msg)
{
  if (msg) {
    nav2_sms_recovery__action__SmsRecovery_Feedback__fini(msg);
  }
  free(msg);
}


bool
nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence__init(nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_sms_recovery__action__SmsRecovery_Feedback * data = NULL;
  if (size) {
    data = (nav2_sms_recovery__action__SmsRecovery_Feedback *)calloc(size, sizeof(nav2_sms_recovery__action__SmsRecovery_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_sms_recovery__action__SmsRecovery_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_sms_recovery__action__SmsRecovery_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence__fini(nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_sms_recovery__action__SmsRecovery_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence *
nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence__create(size_t size)
{
  nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence * array = (nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence__destroy(nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence * array)
{
  if (array) {
    nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "nav2_sms_recovery/action/detail/sms_recovery__functions.h"

bool
nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__init(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!nav2_sms_recovery__action__SmsRecovery_Goal__init(&msg->goal)) {
    nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__fini(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  nav2_sms_recovery__action__SmsRecovery_Goal__fini(&msg->goal);
}

nav2_sms_recovery__action__SmsRecovery_SendGoal_Request *
nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__create()
{
  nav2_sms_recovery__action__SmsRecovery_SendGoal_Request * msg = (nav2_sms_recovery__action__SmsRecovery_SendGoal_Request *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request));
  bool success = nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__destroy(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request * msg)
{
  if (msg) {
    nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence__init(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_sms_recovery__action__SmsRecovery_SendGoal_Request * data = NULL;
  if (size) {
    data = (nav2_sms_recovery__action__SmsRecovery_SendGoal_Request *)calloc(size, sizeof(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence__fini(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence *
nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence__create(size_t size)
{
  nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence * array = (nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence__destroy(nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence * array)
{
  if (array) {
    nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__init(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__fini(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

nav2_sms_recovery__action__SmsRecovery_SendGoal_Response *
nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__create()
{
  nav2_sms_recovery__action__SmsRecovery_SendGoal_Response * msg = (nav2_sms_recovery__action__SmsRecovery_SendGoal_Response *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response));
  bool success = nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__destroy(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response * msg)
{
  if (msg) {
    nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence__init(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_sms_recovery__action__SmsRecovery_SendGoal_Response * data = NULL;
  if (size) {
    data = (nav2_sms_recovery__action__SmsRecovery_SendGoal_Response *)calloc(size, sizeof(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence__fini(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence *
nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence__create(size_t size)
{
  nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence * array = (nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence__destroy(nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence * array)
{
  if (array) {
    nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
nav2_sms_recovery__action__SmsRecovery_GetResult_Request__init(nav2_sms_recovery__action__SmsRecovery_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nav2_sms_recovery__action__SmsRecovery_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_GetResult_Request__fini(nav2_sms_recovery__action__SmsRecovery_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

nav2_sms_recovery__action__SmsRecovery_GetResult_Request *
nav2_sms_recovery__action__SmsRecovery_GetResult_Request__create()
{
  nav2_sms_recovery__action__SmsRecovery_GetResult_Request * msg = (nav2_sms_recovery__action__SmsRecovery_GetResult_Request *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_sms_recovery__action__SmsRecovery_GetResult_Request));
  bool success = nav2_sms_recovery__action__SmsRecovery_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_sms_recovery__action__SmsRecovery_GetResult_Request__destroy(nav2_sms_recovery__action__SmsRecovery_GetResult_Request * msg)
{
  if (msg) {
    nav2_sms_recovery__action__SmsRecovery_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence__init(nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_sms_recovery__action__SmsRecovery_GetResult_Request * data = NULL;
  if (size) {
    data = (nav2_sms_recovery__action__SmsRecovery_GetResult_Request *)calloc(size, sizeof(nav2_sms_recovery__action__SmsRecovery_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_sms_recovery__action__SmsRecovery_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_sms_recovery__action__SmsRecovery_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence__fini(nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_sms_recovery__action__SmsRecovery_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence *
nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence__create(size_t size)
{
  nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence * array = (nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence__destroy(nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence * array)
{
  if (array) {
    nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "nav2_sms_recovery/action/detail/sms_recovery__functions.h"

bool
nav2_sms_recovery__action__SmsRecovery_GetResult_Response__init(nav2_sms_recovery__action__SmsRecovery_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!nav2_sms_recovery__action__SmsRecovery_Result__init(&msg->result)) {
    nav2_sms_recovery__action__SmsRecovery_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_GetResult_Response__fini(nav2_sms_recovery__action__SmsRecovery_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  nav2_sms_recovery__action__SmsRecovery_Result__fini(&msg->result);
}

nav2_sms_recovery__action__SmsRecovery_GetResult_Response *
nav2_sms_recovery__action__SmsRecovery_GetResult_Response__create()
{
  nav2_sms_recovery__action__SmsRecovery_GetResult_Response * msg = (nav2_sms_recovery__action__SmsRecovery_GetResult_Response *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_sms_recovery__action__SmsRecovery_GetResult_Response));
  bool success = nav2_sms_recovery__action__SmsRecovery_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_sms_recovery__action__SmsRecovery_GetResult_Response__destroy(nav2_sms_recovery__action__SmsRecovery_GetResult_Response * msg)
{
  if (msg) {
    nav2_sms_recovery__action__SmsRecovery_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence__init(nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_sms_recovery__action__SmsRecovery_GetResult_Response * data = NULL;
  if (size) {
    data = (nav2_sms_recovery__action__SmsRecovery_GetResult_Response *)calloc(size, sizeof(nav2_sms_recovery__action__SmsRecovery_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_sms_recovery__action__SmsRecovery_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_sms_recovery__action__SmsRecovery_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence__fini(nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_sms_recovery__action__SmsRecovery_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence *
nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence__create(size_t size)
{
  nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence * array = (nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence__destroy(nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence * array)
{
  if (array) {
    nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "nav2_sms_recovery/action/detail/sms_recovery__functions.h"

bool
nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__init(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!nav2_sms_recovery__action__SmsRecovery_Feedback__init(&msg->feedback)) {
    nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__fini(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  nav2_sms_recovery__action__SmsRecovery_Feedback__fini(&msg->feedback);
}

nav2_sms_recovery__action__SmsRecovery_FeedbackMessage *
nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__create()
{
  nav2_sms_recovery__action__SmsRecovery_FeedbackMessage * msg = (nav2_sms_recovery__action__SmsRecovery_FeedbackMessage *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage));
  bool success = nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__destroy(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage * msg)
{
  if (msg) {
    nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence__init(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  nav2_sms_recovery__action__SmsRecovery_FeedbackMessage * data = NULL;
  if (size) {
    data = (nav2_sms_recovery__action__SmsRecovery_FeedbackMessage *)calloc(size, sizeof(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence__fini(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence *
nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence__create(size_t size)
{
  nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence * array = (nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence *)malloc(sizeof(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence__destroy(nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence * array)
{
  if (array) {
    nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
