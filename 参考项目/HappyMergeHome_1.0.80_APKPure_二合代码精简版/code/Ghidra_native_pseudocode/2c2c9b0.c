
/* WARNING: Possible PIC construction at 0x02c3cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c3cae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c3cab4) */
/* WARNING: Removing unreachable block (ram,0x02c3cad4) */
/* WARNING: Removing unreachable block (ram,0x02c3cad8) */
/* WARNING: Removing unreachable block (ram,0x02c3caec) */
/* WARNING: Removing unreachable block (ram,0x02c3cb0c) */
/* WARNING: Removing unreachable block (ram,0x02c3cb10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c3c9b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_02c3cb28 + 0x2c3c9c4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3cb2c + 0x2c3c9d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cb30 + 0x2c3c9e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3cb34 + 0x2c3c9f0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xe88,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xe88,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    func_0x024f56c0(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    puStack_28 = (undefined4 *)uStack_40;
    piStack_24 = (int *)uStack_3c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uVar6 = func_0x024f56d0(iVar4,uVar6,&iStack_30,uVar3,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_02c3cb38 + 0x2c3ca48) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_02c3cb3c + 0x2c3ca64);
  iVar2 = func_0x014e9518(*puVar7);
  piVar8 = *(int **)(_UNK_02c3cb40 + 0x2c3ca78);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xa0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02b0ed3c + 0x2b0ea68);
  iStack_30 = iVar2;
  uStack_2c = uVar6;
  puStack_28 = puVar7;
  piStack_24 = piVar8;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed40 + 0x2b0ea7c),uVar6,1,0);
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed44 + 0x2b0ea88));
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed48 + 0x2b0ea94));
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed4c + 0x2b0eaa0));
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed50 + 0x2b0eaac));
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed54 + 0x2b0eab8));
    *pcVar5 = '\x01';
  }
  iStack_34 = 0;
  iVar4 = func_0x02953fd4(399,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0475561c(iVar4,uVar6,&iStack_34,**(undefined4 **)(_UNK_02b0ed58 + 0x2b0eb40));
    iVar4 = iStack_34;
    uVar3 = 0;
    if (iVar1 != 0) {
      if (iStack_34 == 0) {
        func_0x014388e4();
      }
      func_0x02b20eec(iVar4,1,0);
      func_0x02b0ed6c(iVar2,iStack_34);
      iVar4 = *(int *)(iVar2 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x047552a8(iVar4,uVar6,**(undefined4 **)(_UNK_02b0ed5c + 0x2b0eba8));
      iVar4 = *(int *)(iVar2 + 0x14);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar3 = 1;
      if (0 < *(int *)(iVar4 + 0xc)) {
        iVar4 = *(int *)(iVar2 + 0x14);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        puVar7 = *(undefined4 **)(_UNK_02b0ed60 + 0x2b0ebf0);
        piVar8 = (int *)func_0x03b680f4(iVar4,*puVar7);
        iVar4 = iStack_34;
        if (piVar8 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar4 = (**(code **)(*piVar8 + 0xc0))(piVar8,iVar4,*(undefined4 *)(*piVar8 + 0xc4));
        if (iVar4 != 0) {
          do {
            iVar4 = *(int *)(iVar2 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x03b68138(iVar4,**(undefined4 **)(_UNK_02b0ed64 + 0x2b0ec44));
            iVar4 = *(int *)(iVar2 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar4 + 0xc) < 1) break;
            iVar1 = *(int *)(iVar2 + 0x14);
            iVar4 = *(int *)(iVar2 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x03b680f4(iVar1,*puVar7);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x02b20568(iVar1,0);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x04753c80(iVar4,uVar6,**(undefined4 **)(_UNK_02b0ed68 + 0x2b0ecc4));
          } while (iVar4 == 0);
          iVar4 = *(int *)(iVar2 + 0x14);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar4 + 0xc)) {
            iVar4 = *(int *)(iVar2 + 0x14);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x03b680f4(iVar4,*puVar7);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x02b21408(iVar4,0);
          }
        }
      }
    }
    func_0x02b0effc(iVar2);
  }
  else {
    iVar4 = func_0x029540a4(399,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_38 = 0;
    uVar3 = func_0x0286e8b4(iVar4,iVar2,uVar6,1);
  }
  return uVar3;
}

