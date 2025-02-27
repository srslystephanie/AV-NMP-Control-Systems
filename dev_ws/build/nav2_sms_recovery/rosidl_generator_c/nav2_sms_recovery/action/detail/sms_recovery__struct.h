// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_sms_recovery:action/SmsRecovery.idl
// generated code does not contain a copyright notice

#ifndef NAV2_SMS_RECOVERY__ACTION__DETAIL__SMS_RECOVERY__STRUCT_H_
#define NAV2_SMS_RECOVERY__ACTION__DETAIL__SMS_RECOVERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/SmsRecovery in the package nav2_sms_recovery.
typedef struct nav2_sms_recovery__action__SmsRecovery_Goal
{
  rosidl_runtime_c__String message;
} nav2_sms_recovery__action__SmsRecovery_Goal;

// Struct for a sequence of nav2_sms_recovery__action__SmsRecovery_Goal.
typedef struct nav2_sms_recovery__action__SmsRecovery_Goal__Sequence
{
  nav2_sms_recovery__action__SmsRecovery_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_sms_recovery__action__SmsRecovery_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'total_elapsed_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in action/SmsRecovery in the package nav2_sms_recovery.
typedef struct nav2_sms_recovery__action__SmsRecovery_Result
{
  builtin_interfaces__msg__Duration total_elapsed_time;
} nav2_sms_recovery__action__SmsRecovery_Result;

// Struct for a sequence of nav2_sms_recovery__action__SmsRecovery_Result.
typedef struct nav2_sms_recovery__action__SmsRecovery_Result__Sequence
{
  nav2_sms_recovery__action__SmsRecovery_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_sms_recovery__action__SmsRecovery_Result__Sequence;


// Constants defined in the message

// Struct defined in action/SmsRecovery in the package nav2_sms_recovery.
typedef struct nav2_sms_recovery__action__SmsRecovery_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} nav2_sms_recovery__action__SmsRecovery_Feedback;

// Struct for a sequence of nav2_sms_recovery__action__SmsRecovery_Feedback.
typedef struct nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence
{
  nav2_sms_recovery__action__SmsRecovery_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_sms_recovery__action__SmsRecovery_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_sms_recovery/action/detail/sms_recovery__struct.h"

// Struct defined in action/SmsRecovery in the package nav2_sms_recovery.
typedef struct nav2_sms_recovery__action__SmsRecovery_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_sms_recovery__action__SmsRecovery_Goal goal;
} nav2_sms_recovery__action__SmsRecovery_SendGoal_Request;

// Struct for a sequence of nav2_sms_recovery__action__SmsRecovery_SendGoal_Request.
typedef struct nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence
{
  nav2_sms_recovery__action__SmsRecovery_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_sms_recovery__action__SmsRecovery_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/SmsRecovery in the package nav2_sms_recovery.
typedef struct nav2_sms_recovery__action__SmsRecovery_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_sms_recovery__action__SmsRecovery_SendGoal_Response;

// Struct for a sequence of nav2_sms_recovery__action__SmsRecovery_SendGoal_Response.
typedef struct nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence
{
  nav2_sms_recovery__action__SmsRecovery_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_sms_recovery__action__SmsRecovery_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/SmsRecovery in the package nav2_sms_recovery.
typedef struct nav2_sms_recovery__action__SmsRecovery_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_sms_recovery__action__SmsRecovery_GetResult_Request;

// Struct for a sequence of nav2_sms_recovery__action__SmsRecovery_GetResult_Request.
typedef struct nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence
{
  nav2_sms_recovery__action__SmsRecovery_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_sms_recovery__action__SmsRecovery_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_sms_recovery/action/detail/sms_recovery__struct.h"

// Struct defined in action/SmsRecovery in the package nav2_sms_recovery.
typedef struct nav2_sms_recovery__action__SmsRecovery_GetResult_Response
{
  int8_t status;
  nav2_sms_recovery__action__SmsRecovery_Result result;
} nav2_sms_recovery__action__SmsRecovery_GetResult_Response;

// Struct for a sequence of nav2_sms_recovery__action__SmsRecovery_GetResult_Response.
typedef struct nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence
{
  nav2_sms_recovery__action__SmsRecovery_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_sms_recovery__action__SmsRecovery_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_sms_recovery/action/detail/sms_recovery__struct.h"

// Struct defined in action/SmsRecovery in the package nav2_sms_recovery.
typedef struct nav2_sms_recovery__action__SmsRecovery_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_sms_recovery__action__SmsRecovery_Feedback feedback;
} nav2_sms_recovery__action__SmsRecovery_FeedbackMessage;

// Struct for a sequence of nav2_sms_recovery__action__SmsRecovery_FeedbackMessage.
typedef struct nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence
{
  nav2_sms_recovery__action__SmsRecovery_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_sms_recovery__action__SmsRecovery_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_SMS_RECOVERY__ACTION__DETAIL__SMS_RECOVERY__STRUCT_H_
