from setuptools import setup

package_name = 'bb'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rover',
    maintainer_email='sycole@wpi.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'rover_service = bb.rover_service:main',
            'drive = bb.drive:main',
            'steer = bb.steer:main',
	        'tray = bb.tray:main',
	        'drill = bb.drill:main',
            'lift = bb.lift.main'
        ],
    },
)
