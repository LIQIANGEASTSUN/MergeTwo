namespace FAT.Merge
{
	public static class RunningEnv
	{
		public static IRunningEnvironment sEnv;

		public static readonly DefaultRunningEnv defaultRunningEnv;

		public static IRunningEnvironment Instance => null;

		public static void SetEnv(IRunningEnvironment env)
		{
		}

		public static void ClearEnv()
		{
		}
	}
}
