
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c272f0(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  float fStack_34;
  
  pcVar7 = (char *)(_UNK_02c27674 + 0x2c27310);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c27678 + 0x2c27324));
    func_0x01438628(*(undefined4 *)(_UNK_02c2767c + 0x2c27330));
    func_0x01438628(*(undefined4 *)(_UNK_02c27680 + 0x2c2733c));
    func_0x01438628(*(undefined4 *)(_UNK_02c27684 + 0x2c27348));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5efc,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5efc,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar3,param_1,0);
    return;
  }
  piVar10 = *(int **)(_UNK_02c27688 + 0x2c273a0);
  iVar3 = *(int *)(param_1 + 0x11c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02c2768c + 0x2c273c0);
  iVar4 = func_0x014e9518(*puVar9);
  uVar5 = FUN_02c19900(param_1);
  uVar6 = FUN_02c0c0ac(param_1);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = FUN_02bad204(iVar4,uVar5,uVar6,0);
  if (iVar3 != iVar4) {
    return;
  }
  iVar3 = FUN_02c25d60(param_1);
  if (iVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x118);
    bVar11 = cVar1 == '\0';
    if (bVar11) {
      cVar1 = *(char *)(param_1 + 0x119);
    }
    if (!bVar11 || cVar1 != '\0') {
      fStack_34 = 0.0;
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(*puVar9);
      uVar5 = FUN_02c19900(param_1);
      uVar8 = *(undefined4 *)(param_1 + 0x1c);
      uVar6 = FUN_02c0c0ac(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = FUN_02bd8b98(iVar3,uVar5,uVar8,&fStack_34,uVar6,0);
      if (iVar3 < 1) {
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar9);
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        uVar6 = *(undefined4 *)(param_1 + 0x11c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02bd8188(iVar3,uVar6,uVar5,&fStack_34,0);
        if (iVar3 < 1) {
          if (*(char *)(param_1 + 0x119) != '\0') {
            if (*(int *)(*piVar10 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(*puVar9);
            uVar5 = FUN_02c19900(param_1);
            uVar8 = *(undefined4 *)(param_1 + 0x1c);
            uVar6 = FUN_02c0c0ac(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = FUN_02bd6ae8(iVar3,uVar5,uVar8,&fStack_34,uVar6,0);
            iVar4 = func_0x014e9518(*puVar9);
            uVar5 = FUN_02c19900(param_1);
            uVar6 = FUN_02c0c0ac(param_1);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = FUN_02bd58b4(iVar4,uVar5,uVar6,0);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            if ((0 < iVar3) && (*(int *)(iVar4 + 0xc) == 0)) {
              iVar3 = *(int *)(param_1 + 0x11c);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x38);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0xc) < 1) goto LAB_02c274fc;
            }
          }
          goto LAB_02c27638;
        }
      }
LAB_02c274fc:
      fVar2 = fStack_34;
      iVar3 = *(int *)(param_1 + 0xb0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f0350(iVar3,1.0 - fVar2,0);
      return;
    }
  }
LAB_02c27638:
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c27690 + 0x2c27648),0);
  FUN_02c25090(param_1,0);
  FUN_02c1c2ec(param_1);
  return;
}

