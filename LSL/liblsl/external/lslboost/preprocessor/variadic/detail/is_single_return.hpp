# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.lslboost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.lslboost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_VARIADIC_DETAIL_IS_SINGLE_RETURN_HPP
# define BOOST_PREPROCESSOR_VARIADIC_DETAIL_IS_SINGLE_RETURN_HPP
#
# include <lslboost/preprocessor/config/config.hpp>
#
# /* BOOST_PP_VARIADIC_IS_SINGLE_RETURN */
#
# if BOOST_PP_VARIADICS && BOOST_PP_VARIADICS_MSVC
# include <lslboost/preprocessor/control/iif.hpp>
# include <lslboost/preprocessor/facilities/is_1.hpp>
# include <lslboost/preprocessor/variadic/size.hpp>
# define BOOST_PP_VARIADIC_IS_SINGLE_RETURN(sr,nsr,...)	\
	BOOST_PP_IIF(BOOST_PP_IS_1(BOOST_PP_VARIADIC_SIZE(__VA_ARGS__)),sr,nsr) \
	/**/
# endif /* BOOST_PP_VARIADICS && BOOST_PP_VARIADICS_MSVC */
#
# endif /* BOOST_PREPROCESSOR_VARIADIC_DETAIL_IS_SINGLE_RETURN_HPP */