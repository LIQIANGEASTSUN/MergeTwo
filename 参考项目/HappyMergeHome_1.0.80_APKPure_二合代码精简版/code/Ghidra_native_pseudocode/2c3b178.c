
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c4b178(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02c4b4d8 + 0x2c4b190);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4dc + 0x2c4b1a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4e0 + 0x2c4b1b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4e4 + 0x2c4b1bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4e8 + 0x2c4b1c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4ec + 0x2c4b1d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4f0 + 0x2c4b1e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4f4 + 0x2c4b1ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4f8 + 0x2c4b1f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b4fc + 0x2c4b204));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b500 + 0x2c4b210));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b504 + 0x2c4b21c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4b508 + 0x2c4b228));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4eea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4eea,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar7 = *(int **)(_UNK_02c4b50c + 0x2c4b284);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02c4b510 + 0x2c4b2a0);
  uVar6 = func_0x014e9518(*puVar9);
  if (*(int *)(**(int **)(_UNK_02c4b514 + 0x2c4b2b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar6,0,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = *(int **)(_UNK_02c4b518 + 0x2c4b34c);
      iVar5 = *(int *)(iVar1 + 0x10);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar7;
      }
      iVar8 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar8 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar7;
        }
        uVar6 = **(undefined4 **)(iVar1 + 0x5c);
        iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02c4b51c + 0x2c4b398));
        func_0x03a062d0(iVar8,uVar6,**(undefined4 **)(_UNK_02c4b520 + 0x2c4b3b8),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
        *piVar7 = iVar8;
        func_0x014385cc(piVar7,iVar8);
      }
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0f0c(iVar5,iVar8,**(undefined4 **)(_UNK_02c4b524 + 0x2c4b3f0));
      if (iVar1 != 0) {
        iVar5 = *(int *)(param_1 + 0x18);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x046c268c(iVar5,**(undefined4 **)(_UNK_02c4b528 + 0x2c4b420));
        if (0 < *(int *)(iVar1 + 0xc)) {
          iVar5 = 0;
          puVar9 = *(undefined4 **)(_UNK_02c4b52c + 0x2c4b444);
          puVar10 = *(undefined4 **)(_UNK_02c4b530 + 0x2c4b44c);
          puVar11 = *(undefined4 **)(_UNK_02c4b534 + 0x2c4b454);
          do {
            iVar8 = func_0x0152983c(iVar1,iVar5,*puVar9);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar4 = *(int *)(param_1 + 0x18);
            uVar6 = *(undefined4 *)(iVar8 + 8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar8 = func_0x046c26fc(iVar4,uVar6,*puVar10);
            if (iVar8 == 0) {
              iVar8 = *(int *)(param_1 + 0x18);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              func_0x046c24b0(iVar8,uVar6,uVar6,*puVar11);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(iVar1 + 0xc));
        }
      }
    }
  }
  return;
}

