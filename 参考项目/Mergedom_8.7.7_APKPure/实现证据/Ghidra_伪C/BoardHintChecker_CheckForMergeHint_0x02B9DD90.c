
void Recovered_BoardHintChecker_CheckForMergeHint_0x02B9DD90(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x38) + 0xe4) == '\0') &&
       (iVar1 = func_0x02cb5cbc(0), iVar1 < 2)) {
      return;
    }
    func_0x02c9ddfc(param_1);
    uVar2 = func_0x02c9de48(param_1);
    puVar3 = (undefined8 *)(param_1 + 0x60);
    *puVar3 = uVar2;
    func_0x02ad6d8c(puVar3,uVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x05c47264(*(long *)(param_1 + 0x28),*puVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

