#include "error.h"

const string AppError::text_for_login = "Error: Login must be more than 3 signes!";
const string AppError::text_for_login_is_null = "Error: Login is null!";
const string AppError::text_for_login_empty = "Error: Login is emply!";

const string AppError::text_for_password = "Error: Password must be more that 8 signes!";
const string AppError::text_for_password_is_null = "Error: Password is null!";
const string AppError::text_for_password_empty = "Error: Password is empty!";

const string AppError::text_for_email = "Error: Email must be more that 5 signes!";
const string AppError::text_for_email_is_null = "Error: Email is null!";
const string AppError::text_for_email_empty = "Error: Email is empty!";
const string AppError::text_for_email_at = "Error: Email must contain at sign ('@')!";

const string AppError::text_for_phone = "Error: Phone must be equal to 9 signes!";
const string AppError::text_for_phone_is_null = "Error: Phone is null!";
const string AppError::text_for_phone_empty = "Error: Phone is empty!";
const string AppError::text_for_phone_plus = "Error: Phone must contain plus sign ('+')!";