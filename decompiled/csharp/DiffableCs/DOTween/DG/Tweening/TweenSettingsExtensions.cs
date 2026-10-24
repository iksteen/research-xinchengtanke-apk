namespace DG.Tweening;

[Extension]
public static class TweenSettingsExtensions
{

	[Extension]
	public static T OnComplete(T t, TweenCallback action) { }

	[Extension]
	public static T SetEase(T t, Ease ease) { }

	[Extension]
	public static T SetTarget(T t, object target) { }

}

