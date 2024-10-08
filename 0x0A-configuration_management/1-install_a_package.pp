#!/usr/bin/pup
# install flask

# Ensure pip3 is installed
package { 'python3-pip':
  ensure => installed,
}

# Install Flask version 2.1.0 using pip3
exec { 'install_flask':
  command  => '/usr/bin/pip3 install Flask==2.1.0',
  path     => ['/usr/bin', '/usr/local/bin'],
  unless   => '/usr/bin/pip3 show Flask | grep "Version: 2.1.0"',
  provider => shell,
}
