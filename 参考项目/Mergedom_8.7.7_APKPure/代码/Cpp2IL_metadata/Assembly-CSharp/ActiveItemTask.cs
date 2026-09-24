//Type is in global namespace

public class ActiveItemTask
{
	internal struct UniqueKey
	{
		public bool first; //Field offset: 0x0
		public int second; //Field offset: 0x4

		public bool Equals(UniqueKey other) { }

		public virtual int GetHashCode() { }

		public virtual string ToString() { }

	}

	public ActiveItemTaskData Data; //Field offset: 0x10
	public bool IsCompleted; //Field offset: 0x18
	public float CompletedPercentage; //Field offset: 0x1C
	public Dictionary<Pair`2<Int32, Int32>, Int32> itemObjectivesToCount; //Field offset: 0x20
	public List<Boolean> IndividualItemObjectiveCompleteStatus; //Field offset: 0x28

	public int number
	{
		 get { } //Length: 24
	}

	public int providerId
	{
		 get { } //Length: 24
	}

	public int realNumber
	{
		 get { } //Length: 24
	}

	public ActiveItemTask() { }

	public ActiveItemTask(ActiveItemTaskData d) { }

	public int get_number() { }

	public int get_providerId() { }

	public int get_realNumber() { }

	public UniqueKey GetUniqueKey() { }

	public virtual string ToString() { }

}

