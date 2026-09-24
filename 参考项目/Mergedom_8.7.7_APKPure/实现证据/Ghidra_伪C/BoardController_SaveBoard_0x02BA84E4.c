
void ProbeSaveBoardCorrect(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_02ca8570;
    if (*(char *)(*(long *)(param_1 + 0x38) + 0x119) == '\0') {
      return;
    }
  }
  lVar1 = Recovered_BoardController_FillBoardDataUsingGameData_0x02BA7E10(param_1);
  if (lVar1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x48);
    uVar2 = func_0x02c9d9a0();
    if (lVar1 != 0) {
      func_0x02fe1664(lVar1,uVar2,0);
      if ((param_2 & 1) == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 0x48), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02ca8560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
        return;
      }
    }
  }
LAB_02ca8570:
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

