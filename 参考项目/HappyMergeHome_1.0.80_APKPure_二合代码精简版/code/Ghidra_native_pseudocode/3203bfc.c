
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03213bfc(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_032140a8 + 0x3213c18);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032140ac + 0x3213c2c));
    func_0x01438628(*(undefined4 *)(_UNK_032140b0 + 0x3213c38));
    func_0x01438628(*(undefined4 *)(_UNK_032140b4 + 0x3213c44));
    func_0x01438628(*(undefined4 *)(_UNK_032140b8 + 0x3213c50));
    func_0x01438628(*(undefined4 *)(_UNK_032140bc + 0x3213c5c));
    func_0x01438628(*(undefined4 *)(_UNK_032140c0 + 0x3213c68));
    func_0x01438628(*(undefined4 *)(_UNK_032140c4 + 0x3213c74));
    func_0x01438628(*(undefined4 *)(_UNK_032140c8 + 0x3213c80));
    func_0x01438628(*(undefined4 *)(_UNK_032140cc + 0x3213c8c));
    func_0x01438628(*(undefined4 *)(_UNK_032140d0 + 0x3213c98));
    func_0x01438628(*(undefined4 *)(_UNK_032140d4 + 0x3213ca4));
    func_0x01438628(*(undefined4 *)(_UNK_032140d8 + 0x3213cb0));
    func_0x01438628(*(undefined4 *)(_UNK_032140dc + 0x3213cbc));
    func_0x01438628(*(undefined4 *)(_UNK_032140e0 + 0x3213cc8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7e64,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7e64,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_032140e4 + 0x3213d28) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032140e8 + 0x3213d44));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032140ec + 0x3213d64));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x03b72148(iVar1,0x1b,**(undefined4 **)(_UNK_032140f0 + 0x3213d9c));
  if (iVar1 != 0) {
    iVar6 = FUN_03209df8(param_1);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x70);
    if (iVar6 < param_2) {
      iVar2 = *(int *)(iVar1 + 8);
      iVar9 = iVar2 * iVar6;
      iStack_2c = param_2;
      if (iVar9 < iVar2 * param_2) {
        iVar2 = iVar2 * (param_2 - iVar6);
        puVar10 = *(undefined4 **)(_UNK_032140f4 + 0x3213e08);
        do {
          iVar6 = *(int *)(iVar1 + 0x10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x03b780b0(iVar6,iVar9,*puVar10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar6 + 8)) {
            iVar6 = FUN_03209df8(param_1);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar1 + 0x10);
            iVar6 = *(int *)(iVar6 + 0x18);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x03b780b0(iVar7,iVar9,*puVar10);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar7 + 8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar6,uVar8,**(undefined4 **)(_UNK_032140f8 + 0x3213eac));
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          }
          if (*(int *)(**(int **)(_UNK_032140fc + 0x3213ecc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03214100 + 0x3213ee8));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_44 = 0x1b;
          uStack_3c = 1;
          uStack_38 = 0xffffffff;
          uStack_48 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          iStack_40 = iVar9;
          func_0x02bd2cf0(iVar6,iVar9,0xffffffff,10);
          iVar2 = iVar2 + -1;
          iVar9 = iVar9 + 1;
        } while (iVar2 != 0);
      }
      iVar1 = FUN_03209df8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = iStack_2c;
      func_0x026efd30(iVar1,iStack_2c,0);
      if (*(int *)(**(int **)(_UNK_03214104 + 0x3213f78) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03214108 + 0x3213f94));
      piVar5 = *(int **)(_UNK_0321410c + 0x3213fa8);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar5;
      }
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x330);
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_03214110 + 0x3213fcc),1);
      iStack_28 = iVar6;
      iVar6 = func_0x014387ac(**(undefined4 **)(_UNK_03214114 + 0x3213fec),&iStack_28);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar6 != 0) &&
         (iVar2 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01438904();
        func_0x01438790(uVar3,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar6;
      func_0x014385cc(piVar5 + 4,iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar8,piVar5,0);
      if (*(int *)(**(int **)(_UNK_03214118 + 0x321407c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_03208a00();
      if (iVar1 != 0) {
        func_0x0322cb3c(iVar1,0);
      }
    }
  }
  return;
}

