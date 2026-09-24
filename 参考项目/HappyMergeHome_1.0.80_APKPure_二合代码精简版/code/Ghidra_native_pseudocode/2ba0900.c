
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bb0900(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  
  pcVar6 = (char *)(_UNK_02bb0ed0 + 0x2bb0920);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb0ed4 + 0x2bb0934));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0ed8 + 0x2bb0940));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0edc + 0x2bb094c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0ee0 + 0x2bb0958));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0ee4 + 0x2bb0964));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0ee8 + 0x2bb0970));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0eec + 0x2bb097c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0ef0 + 0x2bb0988));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0ef4 + 0x2bb0994));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0ef8 + 0x2bb09a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0efc + 0x2bb09ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f00 + 0x2bb09b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f04 + 0x2bb09c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f08 + 0x2bb09d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f0c + 0x2bb09dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f10 + 0x2bb09e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f14 + 0x2bb09f4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f18 + 0x2bb0a00));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f1c + 0x2bb0a0c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f20 + 0x2bb0a18));
    func_0x01438628(*(undefined4 *)(_UNK_02bb0f24 + 0x2bb0a24));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x39c9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x046ccb14(iVar1,param_3,**(undefined4 **)(_UNK_02bb0f28 + 0x2bb0ac0));
    iVar1 = 0;
    if ((param_2 != 0 && iVar2 != 0) &&
       (iVar2 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb0f2c + 0x2bb0af0)), iVar2 != 0))
    {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bb0f30 + 0x2bb0b10));
      func_0x024f0510(iVar1,**(undefined4 **)(_UNK_02bb0f34 + 0x2bb0b20));
      iVar2 = *(int *)(param_1 + 0x24);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x046c268c(iVar2,**(undefined4 **)(_UNK_02bb0f38 + 0x2bb0b44));
      func_0x046c2934(&uStack_58,param_2,**(undefined4 **)(_UNK_02bb0f3c + 0x2bb0b60));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar11 = *(undefined4 **)(_UNK_02bb0f40 + 0x2bb0b8c);
      puVar12 = *(undefined4 **)(_UNK_02bb0f44 + 0x2bb0b94);
      while (iVar2 = func_0x048a44e0(&uStack_40,*puVar11), uVar8 = uStack_34, iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x24);
        uVar7 = (undefined4)uStack_30;
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046c24b0(iVar2,uVar8,uVar7,*puVar12);
      }
      func_0x048a4620(&uStack_40,**(undefined4 **)(_UNK_02bb0f48 + 0x2bb0bdc));
      iVar2 = 0;
      puVar12 = *(undefined4 **)(_UNK_02bb0f50 + 0x2bb0bf4);
      puVar11 = *(undefined4 **)(_UNK_02bb0f54 + 0x2bb0bfc);
      while( true ) {
        iVar5 = *(int *)(param_1 + 0x14);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b72148(iVar5,param_3,*puVar12);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar5 + 0xc) <= iVar2) break;
        iVar5 = *(int *)(param_1 + 0x14);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b72148(iVar5,param_3,*puVar12);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b780b0(iVar5,iVar2,*puVar11);
        iVar3 = FUN_02baf28c(param_1,iVar5);
        if (iVar3 != 0) {
          uVar8 = *(undefined4 *)(param_1 + 0x24);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar7 = *(undefined4 *)(iVar5 + 8);
          if (*(int *)(**(int **)(_UNK_02bb0f5c + 0x2bb0cd0) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x035e50e0(uVar8,uVar7,**(undefined4 **)(_UNK_02bb0f60 + 0x2bb0cf4));
          if (0 < iVar3) {
            iVar10 = *(int *)(param_1 + 0x24);
            uVar8 = *(undefined4 *)(iVar5 + 8);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            func_0x046c2488(iVar10,uVar8,iVar3 + -1,**(undefined4 **)(_UNK_02bb0f64 + 0x2bb0d30));
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar1 + 8);
            uVar9 = *(uint *)(iVar1 + 0xc);
            piVar4 = *(int **)(_UNK_02bb0f68 + 0x2bb0d64);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar10 = *piVar4;
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (uVar9 < *(uint *)(iVar3 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar9 + 1;
              *(int *)(iVar3 + uVar9 * 4 + 0x10) = iVar2;
            }
            else {
              func_0x024f0520(iVar1,iVar2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
            }
            puVar12 = *(undefined4 **)(_UNK_02bb0f6c + 0x2bb0db4);
            iVar3 = *(int *)(param_1 + 0x24);
            uVar8 = *(undefined4 *)(iVar5 + 8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x046c23f8(iVar3,uVar8,**(undefined4 **)(_UNK_02bb0f70 + 0x2bb0dd4));
            if (iVar3 < 1) {
              iVar3 = *(int *)(param_1 + 0x24);
              uVar8 = *(undefined4 *)(iVar5 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x046c3bd8(iVar3,uVar8,**(undefined4 **)(_UNK_02bb0f74 + 0x2bb0e08));
            }
          }
          iVar5 = *(int *)(param_1 + 0x24);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x046c2130(iVar5,**(undefined4 **)(_UNK_02bb0f78 + 0x2bb0e2c));
          puVar11 = *(undefined4 **)(_UNK_02bb0f7c + 0x2bb0e44);
          if (iVar5 == 0) {
            return iVar1;
          }
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x39c9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02895178(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}

