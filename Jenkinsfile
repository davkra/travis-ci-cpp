pipeline {
  agent { label 'develop' }
  stages {
    stage('Setup CMake') {
      steps {
          sh 'cmake .'
      }
    }
    stage('Building and Testing') {
      steps {
          sh 'make'
          sh 'ctest'
      }
    }
    stage('Run and Deploy') {
      steps {
          sh 'valgrind ./cppproject 10'
          archiveArtifacts artifacts: 'cppproject', fingerprint: true
      }
    }
  }
}
