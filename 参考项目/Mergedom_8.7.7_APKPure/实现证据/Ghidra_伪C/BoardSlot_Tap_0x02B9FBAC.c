
void Recovered_BoardSlot_Tap_0x02B9FBAC(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02c9fbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
    return;
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

