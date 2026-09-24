using System;
using System.Collections.Generic;
using System.Reflection;
using MergeEngine.ECS.Systems;
using Zenject;

namespace MergeEngine.ECS.Util
{
	public static class ECSInjectionUtil
	{
		public const BindingFlags BindingFlags = BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.SetField | BindingFlags.SetProperty;

		public static Dictionary<Type, MethodInfo> _callCache;

		public static void InjectComponents(object target, IEntityManager entityManager)
		{
		}

		public static void InjectSystems(object target, ISystemManager systemManager)
		{
		}

		public static void InjectAll(object target, DiContainer container)
		{
		}

		public static void InjectSystemsAndComponents(object target, DiContainer container)
		{
		}
	}
}
