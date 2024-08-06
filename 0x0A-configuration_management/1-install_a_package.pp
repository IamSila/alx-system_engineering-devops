#!/usr/bin/pup
# installing flusk v 2.1.0 on an agent 

package {'flask':
    ensure   => '2.1.0',
    provider => 'pip3',
}
