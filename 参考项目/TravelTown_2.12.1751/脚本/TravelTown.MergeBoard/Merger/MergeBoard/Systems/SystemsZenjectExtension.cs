using System;
using ContextualizedECS.Systems;
using Zenject;

namespace Merger.MergeBoard.Systems
{
	public static class SystemsZenjectExtension
	{
		public readonly struct SystemsBuilderWithContext
		{
			[NonSerialized]
			public readonly DiContainer _container;

			[NonSerialized]
			public readonly SystemsBuilder _builder;

			public SystemsBuilderWithContext(SystemsBuilder builder, DiContainer container)
			{
				_container = null;
				_builder = null;
			}

			public SystemInfo Register<T>() where T : ISystem
			{
				return null;
			}
		}

		public static SystemsBuilderWithContext WithContext(this SystemsBuilder builder, DiContainer container)
		{
			return default(SystemsBuilderWithContext);
		}
	}
}
