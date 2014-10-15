/*
 * author: Lukasz Hryniuk
 * e-mail: lukequaint@gmail.com
 * */
/*
 * http://matthewkwong.blogspot.com/2010/10/writing-your-own-shell-stuck-on-pipes.html
 * http://www.cse.ohio-state.edu/~mamrak/CIS762/pipes_lab_notes.html
 */

#ifndef PIPES_H_
#define PIPES_H_

#include <string>


const int PIPE_READ = 0;
const int PIPE_WRITE = 1;

void make_pipe(const std::string& command_line);

#endif /* PIPES_H_ */
