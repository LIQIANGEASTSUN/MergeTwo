
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017e42b4(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  pcVar2 = (char *)(_UNK_017e4594 + 0x17e42c8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e4598 + 0x17e42dc));
    func_0x01438628(*(undefined4 *)(_UNK_017e459c + 0x17e42e8));
    func_0x01438628(*(undefined4 *)(_UNK_017e45a0 + 0x17e42f4));
    func_0x01438628(*(undefined4 *)(_UNK_017e45a4 + 0x17e4300));
    func_0x01438628(*(undefined4 *)(_UNK_017e45a8 + 0x17e430c));
    func_0x01438628(*(undefined4 *)(_UNK_017e45ac + 0x17e4318));
    *pcVar2 = '\x01';
  }
  iVar3 = param_1[6];
  if (*(int *)(**(int **)(_UNK_017e45b0 + 0x17e432c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017e45b4 + 0x17e434c));
  uVar5 = param_1[5];
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,uVar5,0);
  if (iVar1 != 0) {
    uVar5 = param_1[5];
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_017da96c(iVar3,uVar5);
    if ((param_1[7] == 10) && (iVar6 = *(int *)(iVar1 + 0x48), 0 < iVar6)) {
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_017dac20(iVar3,iVar6);
      uVar5 = *(undefined4 *)(iVar1 + 0x48);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      FUN_017dac20(iVar3,uVar5);
    }
    if (*(int *)(**(int **)(_UNK_017e45b8 + 0x17e43f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017e45bc + 0x17e4410));
    piVar4 = *(int **)(_UNK_017e45c0 + 0x17e4424);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar4;
    }
    iVar7 = **(int **)(_UNK_017e45c4 + 0x17e4444);
    iVar6 = *(int *)(iVar7 + 0x1c);
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 800);
    if (iVar6 == 0) {
      func_0x014909d8(iVar7);
      iVar6 = *(int *)(iVar7 + 0x1c);
    }
    iVar1 = *(int *)(iVar6 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    uVar8 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar3,uVar5,uVar8,0);
  }
  *param_1 = 0xfffffffe;
  (*(code *)&UNK_0505659c)(param_1 + 1,0);
  return;
}

