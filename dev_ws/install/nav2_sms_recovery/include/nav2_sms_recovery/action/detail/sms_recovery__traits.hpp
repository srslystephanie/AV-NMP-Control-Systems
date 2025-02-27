// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_sms_recovery:action/SmsRecovery.idl
// generated code does not contain a copyright notice

#ifndef NAV2_SMS_RECOVERY__ACTION__DETAIL__SMS_RECOVERY__TRAITS_HPP_
#define NAV2_SMS_RECOVERY__ACTION__DETAIL__SMS_RECOVERY__TRAITS_HPP_

#include "nav2_sms_recovery/action/detail/sms_recovery__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_sms_recovery::action::SmsRecovery_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_sms_recovery::action::SmsRecovery_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_Goal>()
{
  return "nav2_sms_recovery::action::SmsRecovery_Goal";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_Goal>()
{
  return "nav2_sms_recovery/action/SmsRecovery_Goal";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_sms_recovery::action::SmsRecovery_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'total_elapsed_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_sms_recovery::action::SmsRecovery_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: total_elapsed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_elapsed_time:\n";
    to_yaml(msg.total_elapsed_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_sms_recovery::action::SmsRecovery_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_Result>()
{
  return "nav2_sms_recovery::action::SmsRecovery_Result";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_Result>()
{
  return "nav2_sms_recovery/action/SmsRecovery_Result";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<nav2_sms_recovery::action::SmsRecovery_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_sms_recovery::action::SmsRecovery_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_sms_recovery::action::SmsRecovery_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_Feedback>()
{
  return "nav2_sms_recovery::action::SmsRecovery_Feedback";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_Feedback>()
{
  return "nav2_sms_recovery/action/SmsRecovery_Feedback";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_sms_recovery::action::SmsRecovery_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "nav2_sms_recovery/action/detail/sms_recovery__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_sms_recovery::action::SmsRecovery_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_sms_recovery::action::SmsRecovery_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_SendGoal_Request>()
{
  return "nav2_sms_recovery::action::SmsRecovery_SendGoal_Request";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_SendGoal_Request>()
{
  return "nav2_sms_recovery/action/SmsRecovery_SendGoal_Request";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<nav2_sms_recovery::action::SmsRecovery_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<nav2_sms_recovery::action::SmsRecovery_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_sms_recovery::action::SmsRecovery_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_sms_recovery::action::SmsRecovery_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_sms_recovery::action::SmsRecovery_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_SendGoal_Response>()
{
  return "nav2_sms_recovery::action::SmsRecovery_SendGoal_Response";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_SendGoal_Response>()
{
  return "nav2_sms_recovery/action/SmsRecovery_SendGoal_Response";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<nav2_sms_recovery::action::SmsRecovery_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_SendGoal>()
{
  return "nav2_sms_recovery::action::SmsRecovery_SendGoal";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_SendGoal>()
{
  return "nav2_sms_recovery/action/SmsRecovery_SendGoal";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_sms_recovery::action::SmsRecovery_SendGoal_Request>::value &&
    has_fixed_size<nav2_sms_recovery::action::SmsRecovery_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_sms_recovery::action::SmsRecovery_SendGoal_Request>::value &&
    has_bounded_size<nav2_sms_recovery::action::SmsRecovery_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<nav2_sms_recovery::action::SmsRecovery_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_sms_recovery::action::SmsRecovery_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_sms_recovery::action::SmsRecovery_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_sms_recovery::action::SmsRecovery_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_sms_recovery::action::SmsRecovery_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_GetResult_Request>()
{
  return "nav2_sms_recovery::action::SmsRecovery_GetResult_Request";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_GetResult_Request>()
{
  return "nav2_sms_recovery/action/SmsRecovery_GetResult_Request";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_sms_recovery::action::SmsRecovery_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_sms_recovery/action/detail/sms_recovery__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_sms_recovery::action::SmsRecovery_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_sms_recovery::action::SmsRecovery_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_GetResult_Response>()
{
  return "nav2_sms_recovery::action::SmsRecovery_GetResult_Response";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_GetResult_Response>()
{
  return "nav2_sms_recovery/action/SmsRecovery_GetResult_Response";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<nav2_sms_recovery::action::SmsRecovery_Result>::value> {};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<nav2_sms_recovery::action::SmsRecovery_Result>::value> {};

template<>
struct is_message<nav2_sms_recovery::action::SmsRecovery_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_GetResult>()
{
  return "nav2_sms_recovery::action::SmsRecovery_GetResult";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_GetResult>()
{
  return "nav2_sms_recovery/action/SmsRecovery_GetResult";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_sms_recovery::action::SmsRecovery_GetResult_Request>::value &&
    has_fixed_size<nav2_sms_recovery::action::SmsRecovery_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_sms_recovery::action::SmsRecovery_GetResult_Request>::value &&
    has_bounded_size<nav2_sms_recovery::action::SmsRecovery_GetResult_Response>::value
  >
{
};

template<>
struct is_service<nav2_sms_recovery::action::SmsRecovery_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_sms_recovery::action::SmsRecovery_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_sms_recovery::action::SmsRecovery_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "nav2_sms_recovery/action/detail/sms_recovery__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const nav2_sms_recovery::action::SmsRecovery_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const nav2_sms_recovery::action::SmsRecovery_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<nav2_sms_recovery::action::SmsRecovery_FeedbackMessage>()
{
  return "nav2_sms_recovery::action::SmsRecovery_FeedbackMessage";
}

template<>
inline const char * name<nav2_sms_recovery::action::SmsRecovery_FeedbackMessage>()
{
  return "nav2_sms_recovery/action/SmsRecovery_FeedbackMessage";
}

template<>
struct has_fixed_size<nav2_sms_recovery::action::SmsRecovery_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<nav2_sms_recovery::action::SmsRecovery_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_sms_recovery::action::SmsRecovery_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<nav2_sms_recovery::action::SmsRecovery_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<nav2_sms_recovery::action::SmsRecovery_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<nav2_sms_recovery::action::SmsRecovery>
  : std::true_type
{
};

template<>
struct is_action_goal<nav2_sms_recovery::action::SmsRecovery_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<nav2_sms_recovery::action::SmsRecovery_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<nav2_sms_recovery::action::SmsRecovery_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // NAV2_SMS_RECOVERY__ACTION__DETAIL__SMS_RECOVERY__TRAITS_HPP_
