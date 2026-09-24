
undefined8 TailTarget_350ba74(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    func_0x02ad6de0(PTR_DAT_064044b8);
    func_0x02ad6de0(PTR_DAT_063fb5a0);
    if (*(long *)(param_3 + 0x38) == 0) {
      func_0x02b0e084(param_3);
    }
  }
  if (param_1 != 0) {
    if ((0 < *(int *)(param_1 + 0x18)) &&
       (iVar2 = func_0x05c38430(0,100,0), puVar1 = PTR_DAT_063fb5a0, 0 < *(int *)(param_1 + 0x18)))
    {
      fVar6 = 0.0;
      iVar4 = 0;
      do {
        fVar5 = (float)func_0x03c67aec(param_1,iVar4,*(undefined8 *)puVar1);
        fVar6 = fVar6 + fVar5 * 100.0;
        if ((float)iVar2 < fVar6) {
          if (param_2 != 0) {
            uVar3 = TailTarget_3b28b60(param_2,iVar4,
                                       *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
            return uVar3;
          }
          goto LAB_0360bb84;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x18));
    }
    return 0;
  }
LAB_0360bb84:
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

