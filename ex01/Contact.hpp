# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact 
{

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
		
	public:
		void SetFirstName(std::string& str);
		void SetLastName(std::string& str);
		void SetNickName(std::string& str);
		void SetPhoneNumber(std::string& str);
		void SetDarkestSecret(std::string& str);

		std::string GetFirstName() const { return first_name;}
		std::string GetLastName() const { return last_name;}
		std::string GetNickName() const {return nick_name;}
		std::string GetPhoneNumber() const { return phone_number;}
		std::string GetDarkestSecret() const { return darkest_secret;}
};

# endif
