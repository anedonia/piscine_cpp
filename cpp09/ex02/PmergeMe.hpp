/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:34:33 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/19 18:19:36 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <deque>

void insertion_sort(std::vector<int> &vec, int begin, int end);
void merge(std::vector<int> &vec, int begin, int mid, int end);
void mergeSort(std::vector<int> &vec, int begin, int end, int limit);
void insertion_sort(std::deque<int> &vec, int begin, int end);
void merge(std::deque<int> &vec, int begin, int mid, int end);
void mergeSort(std::deque<int> &vec, int begin, int end, int limit);

#endif