file{'/tmp/school':
    path    => '/etc/school',
    ensure  => 'file',
    content => 'I love Puppet',
    mode    => '0744',
    owner   => 'www-data',
    group   => 'www-data',
    
}
