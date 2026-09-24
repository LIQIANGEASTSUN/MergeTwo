
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bb02c4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_02bb085c + 0x2bb02e4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb0860 + 0x2bb02f8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0864 + 0x2bb0304));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0868 + 0x2bb0310));
    func_0x01438628(*(undefined4 *)(_UNK_02bb086c + 0x2bb031c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0870 + 0x2bb0328));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0874 + 0x2bb0334));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0878 + 0x2bb0340));
    func_0x01438628(*(undefined4 *)(_UNK_02bb087c + 0x2bb034c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0880 + 0x2bb0358));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0884 + 0x2bb0364));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0888 + 0x2bb0370));
    func_0x01438628(*(undefined4 *)(_UNK_02bb088c + 0x2bb037c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0890 + 0x2bb0388));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0894 + 0x2bb0394));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0898 + 0x2bb03a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb089c + 0x2bb03ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bb08a0 + 0x2bb03b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb08a4 + 0x2bb03c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb08a8 + 0x2bb03d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb08ac + 0x2bb03dc));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar12 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5cd1,0);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x24) != 0) &&
       (iVar1 = func_0x046c2130(*(int *)(param_1 + 0x24),
                                **(undefined4 **)(_UNK_02bb08b0 + 0x2bb046c)), 0 < iVar1)) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x046ccb14(iVar1,param_3,**(undefined4 **)(_UNK_02bb08b4 + 0x2bb0498));
      if ((param_2 != 0 && iVar1 != 0) &&
         (iVar1 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb08b8 + 0x2bb04c4)), iVar1 != 0)
         ) {
        iVar12 = func_0x014388d4(**(undefined4 **)(_UNK_02bb08bc + 0x2bb04e0));
        func_0x024f0510(iVar12,**(undefined4 **)(_UNK_02bb08c0 + 0x2bb04f4));
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 != param_2) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x046c268c(iVar1,**(undefined4 **)(_UNK_02bb08c4 + 0x2bb0524));
          func_0x046c2934(&uStack_58,param_2,**(undefined4 **)(_UNK_02bb08c8 + 0x2bb0540));
          uStack_40 = uStack_58;
          uStack_3c = uStack_54;
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          puVar10 = *(undefined4 **)(_UNK_02bb08cc + 0x2bb056c);
          puVar11 = *(undefined4 **)(_UNK_02bb08d0 + 0x2bb0574);
          while (iVar1 = func_0x048a44e0(&uStack_40,*puVar10), uVar7 = uStack_34, iVar1 != 0) {
            iVar1 = *(int *)(param_1 + 0x24);
            uVar9 = (undefined4)uStack_30;
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x046c24b0(iVar1,uVar7,uVar9,*puVar11);
          }
          func_0x048a4620(&uStack_40,**(undefined4 **)(_UNK_02bb08d4 + 0x2bb05bc));
        }
        iVar1 = 0;
        do {
          iVar2 = FUN_02bad050(param_1,param_3);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x34);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar1) {
            return iVar12;
          }
          iVar2 = FUN_02bad050(param_1,param_3);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x34);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,iVar1,**(undefined4 **)(_UNK_02bb08e0 + 0x2bb0640));
          uVar7 = *(undefined4 *)(param_1 + 0x24);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar9 = *(undefined4 *)(iVar2 + 8);
          if (*(int *)(**(int **)(_UNK_02bb08e4 + 0x2bb0668) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x035e50e0(uVar7,uVar9,**(undefined4 **)(_UNK_02bb08e8 + 0x2bb068c));
          if (0 < iVar3) {
            iVar6 = *(int *)(param_1 + 0x24);
            uVar7 = *(undefined4 *)(iVar2 + 8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x046c2488(iVar6,uVar7,iVar3 + -1,**(undefined4 **)(_UNK_02bb08ec + 0x2bb06c8));
            if (iVar12 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar12 + 8);
            uVar8 = *(uint *)(iVar12 + 0xc);
            piVar4 = *(int **)(_UNK_02bb08f0 + 0x2bb06fc);
            *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 1;
            iVar6 = *piVar4;
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (uVar8 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar12 + 0xc) = uVar8 + 1;
              *(int *)(iVar3 + uVar8 * 4 + 0x10) = iVar1;
            }
            else {
              func_0x024f0520(iVar12,iVar1,
                              *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
            }
            iVar3 = *(int *)(param_1 + 0x24);
            uVar7 = *(undefined4 *)(iVar2 + 8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x046c23f8(iVar3,uVar7,**(undefined4 **)(_UNK_02bb08f4 + 0x2bb0764));
            if (iVar3 < 1) {
              iVar3 = *(int *)(param_1 + 0x24);
              uVar7 = *(undefined4 *)(iVar2 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x046c3bd8(iVar3,uVar7,**(undefined4 **)(_UNK_02bb08f8 + 0x2bb0798));
            }
          }
          iVar2 = *(int *)(param_1 + 0x24);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_02bb08fc + 0x2bb07bc));
          iVar1 = iVar1 + 1;
        } while (iVar2 != 0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cd1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar12 = func_0x02895178(iVar1,param_1,param_2,param_3,0);
  }
  return iVar12;
}

