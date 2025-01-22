/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: art3mis <art3mis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:00:51 by art3mis           #+#    #+#             */
/*   Updated: 2025/01/07 19:38:23 by art3mis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
# define COLORS_HPP

/******************************************************************************\
 * COLORS
\******************************************************************************/

# define RESET  		"\e[0m"

# define BOLD			"\e[1m"
# define ITAL			"\e[3m"
# define UNDERLINE		"\e[4m"

# define BLACK			"\e[30m"
# define GRAY			"\e[90m"
# define RED			"\e[31m"
# define GREEN			"\e[32m"
# define YELLOW			"\e[33m"
# define ORANGE			"\e[38;5;208m"
# define BLUE			"\e[34m"
# define PURPLE			"\e[35m"
# define PINK			"\e[38;2;255;182;193m"
# define CYAN			"\e[36m"
# define WHITE			"\e[37m"

# define LIGHT_GRAY     	"\e[38;2;173;165;165m"
# define LIGHT_GRAY2     	"\e[38;2;211;211;211m"

// Pastel colors
# define PG			"\e[38;2;173;235;179m" // green
# define PGG		"\e[38;2;152;168;105m" // green
# define PB			"\e[38;2;179;235;242m" // blue
# define PY			"\e[38;2;255;234;150m" // yellow
# define PP			"\e[38;2;211;211;255m" // purple
# define PO			"\e[38;2;255;178;127m" // orange

/******************************************************************************\
 * PROJECT CUSTOM
\******************************************************************************/

# define WELCOME "Welcome to...\n\n"
# define ASCII_ART "\
 ______           __                                                              \n\
/\\  _  \\         /\\ \\__                       __                                 \n\
\\ \\ \\L\\ \\   _ __ \\ \\ ,_\\     __     ___ ___  /\\_\\     ____                       \n\
 \\ \\  __ \\ /\\`'__\\\\ \\ \\/   /'__`\\ /' __` __`\\\\/\\ \\   /',__\\                      \n\
  \\ \\ \\/\\ \\\\ \\ \\/  \\ \\ \\_ /\\  __/ /\\ \\/\\ \\/\\ \\\\ \\ \\ /\\__, `\\                     \n\
   \\ \\_\\ \\_\\\\ \\_\\   \\ \\__\\\\ \\____\\\\ \\_\\ \\_\\ \\_\\\\ \\_\\\\/\\____/                     \n\
    \\/_/\\/_/ \\/_/    \\/__/ \\/____/ \\/_/\\/_/\\/_/ \\/_/ \\/___/                      \n\
                                                                                 \n\
 ____     __                                 __                       __         \n\
/\\  _`\\  /\\ \\                               /\\ \\                     /\\ \\        \n\
\\ \\ \\L\\ \\\\ \\ \\___      ___     ___       __ \\ \\ \\____    ___     ___ \\ \\ \\/'\\    \n\
 \\ \\ ,__/ \\ \\  _ `\\   / __`\\ /' _ `\\   /'__`\\\\ \\ '__`\\  / __`\\  / __`\\\\ \\ , <    \n\
  \\ \\ \\/   \\ \\ \\ \\ \\ /\\ \\L\\ \\/\\ \\/\\ \\ /\\  __/ \\ \\ \\L\\ \\/\\ \\L\\ \\/\\ \\L\\ \\\\ \\ \\\\`\\  \n\
   \\ \\_\\    \\ \\_\\ \\_\\\\ \\____/\\ \\_\\ \\_\\\\ \\____\\ \\ \\_,__/\\ \\____/\\ \\____/ \\ \\_\\ \\_\\\n\
    \\/_/     \\/_/\\/_/ \\/___/  \\/_/\\/_/ \\/____/  \\/___/  \\/___/  \\/___/   \\/_/\\/_/\n\n"

# define CMD_HEADER "\n=========================[COMMANDS]=========================\n"
# define BAR_EMPT "|\t\t\t\t\t\t\t   |"
# define FRONT "| "
# define BACK1 "\t\t\t\t   |\n"
# define BACK2 "\t\t\t   |\n"
# define BACK3 "\t   |\n"
# define CMD_BOTTOM "\n============================================================\n"

# define TOP_BANNER "_____________________________________________"
# define BOTTOM_BANNER "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾"

#endif