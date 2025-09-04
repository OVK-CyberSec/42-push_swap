/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohifdi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:29:23 by mohifdi           #+#    #+#             */
/*   Updated: 2025/09/04 17:30:44 by mohifdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>

char	**ft_split(const char *s, char c);
int		is_separator(char c, char sep);
int		count_words(const char *str, char sep);
char	*word_splitter(char *str, char sep);
int		ft_isdigit(int value);
void	free_split(char **split);
#endif
