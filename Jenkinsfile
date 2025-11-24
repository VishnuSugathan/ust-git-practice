pipeline {
    agent {
        docker {
            image 'python:3.14.0-alpine3.22'  // Use the appropriate Python image
            args '-u root:root'  // Run as root to avoid permission issues (optional, may not be necessary)
        }
    }

    stages {
        stage('Checkout') {
            steps {
                // Checkout code from your Git repository
                git 'https://github.com/VishnuSugathan/ust-git-practice'  // Replace with your repo URL
            }
        }

        stage('Install Dependencies') {
            steps {
                // Install dependencies (if you have any)
                sh 'pip install --no-cache-dir -r requirements.txt'  // Optional, if you have a requirements.txt
            }
        }

        stage('Run Hello World') {
            steps {
                // Run the Python script
                sh 'python hello.py'
            }
        }
    }

    post {
        always {
            // This step runs after the pipeline finishes, even if it fails
            echo 'Pipeline finished'
        }
    }
}
