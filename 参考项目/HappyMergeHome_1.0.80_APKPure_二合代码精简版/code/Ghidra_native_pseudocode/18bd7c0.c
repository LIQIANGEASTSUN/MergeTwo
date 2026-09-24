
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018cd7c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_018cdc6c + 0x18cd7dc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cdc70 + 0x18cd7f0));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc74 + 0x18cd7fc));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc78 + 0x18cd808));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc7c + 0x18cd814));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc80 + 0x18cd820));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc84 + 0x18cd82c));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc88 + 0x18cd838));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc8c + 0x18cd844));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc90 + 0x18cd850));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc94 + 0x18cd85c));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc98 + 0x18cd868));
    func_0x01438628(*(undefined4 *)(_UNK_018cdc9c + 0x18cd874));
    func_0x01438628(*(undefined4 *)(_UNK_018cdca0 + 0x18cd880));
    func_0x01438628(*(undefined4 *)(_UNK_018cdca4 + 0x18cd88c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x950f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x950f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_018cdca8 + 0x18cd8ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cdcac + 0x18cd908));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018cdcb0 + 0x18cd928));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f110c(iVar1,0x31,**(undefined4 **)(_UNK_018cdcb4 + 0x18cd960));
  if (iVar1 != 0) {
    iVar7 = FUN_018c3704(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0x70);
    if (iVar7 < param_2) {
      iVar2 = *(int *)(iVar1 + 8);
      iVar9 = iVar2 * iVar7;
      iStack_2c = param_2;
      if (iVar9 < iVar2 * param_2) {
        iVar2 = iVar2 * (param_2 - iVar7);
        puVar10 = *(undefined4 **)(_UNK_018cdcb8 + 0x18cd9cc);
        do {
          iVar7 = *(int *)(iVar1 + 0x10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x014e9698(iVar7,iVar9,*puVar10);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar7 + 8)) {
            iVar7 = FUN_018c3704(param_1);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar1 + 0x10);
            iVar7 = *(int *)(iVar7 + 0x18);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x014e9698(iVar6,iVar9,*puVar10);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar6 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar7,uVar8,**(undefined4 **)(_UNK_018cdcbc + 0x18cda70));
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
          if (*(int *)(**(int **)(_UNK_018cdcc0 + 0x18cda90) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_018cdcc4 + 0x18cdaac));
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          uStack_44 = 0x31;
          uStack_3c = 1;
          uStack_38 = 0xffffffff;
          uStack_48 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          iStack_40 = iVar9;
          func_0x02bd2cf0(iVar7,iVar9,0xffffffff,10);
          iVar2 = iVar2 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar2 != 0);
      }
      iVar1 = FUN_018c3704(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar7 = iStack_2c;
      func_0x026efd30(iVar1,iStack_2c,0);
      if (*(int *)(**(int **)(_UNK_018cdcc8 + 0x18cdb3c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018cdccc + 0x18cdb58));
      piVar5 = *(int **)(_UNK_018cdcd0 + 0x18cdb6c);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar5;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x330);
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_018cdcd4 + 0x18cdb90),1);
      iStack_28 = iVar7;
      iVar7 = func_0x014387ac(**(undefined4 **)(_UNK_018cdcd8 + 0x18cdbb0),&iStack_28);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar7 != 0) &&
         (iVar2 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01438904();
        func_0x01438790(uVar3,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar7;
      func_0x014385cc(piVar5 + 4,iVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar8,piVar5,0);
      if (*(int *)(**(int **)(_UNK_018cdcdc + 0x18cdc40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_018c230c();
      if (iVar1 != 0) {
        func_0x018e9e58(iVar1,0);
      }
    }
  }
  return;
}

