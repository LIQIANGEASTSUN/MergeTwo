
/* WARNING: Possible PIC construction at 0x01b58e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b58e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b58e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b58ec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b58e8c) */
/* WARNING: Removing unreachable block (ram,0x01b58eac) */
/* WARNING: Removing unreachable block (ram,0x01b58eb0) */
/* WARNING: Removing unreachable block (ram,0x01b58e54) */
/* WARNING: Removing unreachable block (ram,0x01b58e74) */
/* WARNING: Removing unreachable block (ram,0x01b58e78) */
/* WARNING: Removing unreachable block (ram,0x01b58e1c) */
/* WARNING: Removing unreachable block (ram,0x01b58e3c) */
/* WARNING: Removing unreachable block (ram,0x01b58e40) */
/* WARNING: Removing unreachable block (ram,0x01b58ec4) */
/* WARNING: Removing unreachable block (ram,0x01b58ee4) */
/* WARNING: Removing unreachable block (ram,0x01b58ee8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b58d20(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_01b58f00 + 0x1b58d30);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b58f04 + 0x1b58d44));
    func_0x01438628(*(undefined4 *)(_UNK_01b58f08 + 0x1b58d50));
    func_0x01438628(*(undefined4 *)(_UNK_01b58f0c + 0x1b58d5c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa67e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa67e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    iStack_30 = 0;
    func_0x024f56c0(&iStack_48,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    puStack_28 = (undefined4 *)uStack_40;
    piStack_24 = (int *)uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = func_0x024f56d0(iVar7,uVar5,&iStack_30,uVar4,0,0);
    return uVar4;
  }
  if (*(int *)(**(int **)(_UNK_01b58f10 + 0x1b58db0) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar6 = *(undefined4 **)(_UNK_01b58f14 + 0x1b58dcc);
  iVar1 = func_0x014e9518(*puVar6);
  piVar8 = *(int **)(_UNK_01b58f18 + 0x1b58de0);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4();
    iVar7 = *piVar8;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x124);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar3 = (char *)(_UNK_02b0ed3c + 0x2b0ea68);
  iStack_30 = iVar1;
  uStack_2c = uVar4;
  puStack_28 = puVar6;
  piStack_24 = piVar8;
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed40 + 0x2b0ea7c),uVar4,1,0);
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed44 + 0x2b0ea88));
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed48 + 0x2b0ea94));
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed4c + 0x2b0eaa0));
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed50 + 0x2b0eaac));
    func_0x01438628(*(undefined4 *)(_UNK_02b0ed54 + 0x2b0eab8));
    *pcVar3 = '\x01';
  }
  iStack_34 = 0;
  iVar7 = func_0x02953fd4(399,0);
  if (iVar7 == 0) {
    iVar7 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0475561c(iVar7,uVar4,&iStack_34,**(undefined4 **)(_UNK_02b0ed58 + 0x2b0eb40));
    iVar7 = iStack_34;
    uVar5 = 0;
    if (iVar2 != 0) {
      if (iStack_34 == 0) {
        func_0x014388e4();
      }
      func_0x02b20eec(iVar7,1,0);
      func_0x02b0ed6c(iVar1,iStack_34);
      iVar7 = *(int *)(iVar1 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x047552a8(iVar7,uVar4,**(undefined4 **)(_UNK_02b0ed5c + 0x2b0eba8));
      iVar7 = *(int *)(iVar1 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar5 = 1;
      if (0 < *(int *)(iVar7 + 0xc)) {
        iVar7 = *(int *)(iVar1 + 0x14);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        puVar6 = *(undefined4 **)(_UNK_02b0ed60 + 0x2b0ebf0);
        piVar8 = (int *)func_0x03b680f4(iVar7,*puVar6);
        iVar7 = iStack_34;
        if (piVar8 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar7 = (**(code **)(*piVar8 + 0xc0))(piVar8,iVar7,*(undefined4 *)(*piVar8 + 0xc4));
        if (iVar7 != 0) {
          do {
            iVar7 = *(int *)(iVar1 + 0x14);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x03b68138(iVar7,**(undefined4 **)(_UNK_02b0ed64 + 0x2b0ec44));
            iVar7 = *(int *)(iVar1 + 0x14);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar7 + 0xc) < 1) break;
            iVar2 = *(int *)(iVar1 + 0x14);
            iVar7 = *(int *)(iVar1 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x03b680f4(iVar2,*puVar6);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uVar4 = func_0x02b20568(iVar2,0);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x04753c80(iVar7,uVar4,**(undefined4 **)(_UNK_02b0ed68 + 0x2b0ecc4));
          } while (iVar7 == 0);
          iVar7 = *(int *)(iVar1 + 0x14);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar7 + 0xc)) {
            iVar7 = *(int *)(iVar1 + 0x14);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x03b680f4(iVar7,*puVar6);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            func_0x02b21408(iVar7,0);
          }
        }
      }
    }
    func_0x02b0effc(iVar1);
  }
  else {
    iVar7 = func_0x029540a4(399,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_38 = 0;
    uVar5 = func_0x0286e8b4(iVar7,iVar1,uVar4,1);
  }
  return uVar5;
}

