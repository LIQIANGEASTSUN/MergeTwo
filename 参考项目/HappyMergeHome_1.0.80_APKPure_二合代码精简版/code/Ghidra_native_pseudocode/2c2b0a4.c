
/* WARNING: Removing unreachable block (ram,0x02c3b57c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3b0a4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02c3b800 + 0x2c3b0c0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3b804 + 0x2c3b0d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b808 + 0x2c3b0e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b80c + 0x2c3b0ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b810 + 0x2c3b0f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b814 + 0x2c3b104));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b818 + 0x2c3b110));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b81c + 0x2c3b11c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b820 + 0x2c3b128));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b824 + 0x2c3b134));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b828 + 0x2c3b140));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b82c + 0x2c3b14c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3b830 + 0x2c3b158));
    *pcVar6 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  iVar1 = func_0x02953fd4(0xe92,0);
  if (iVar1 == 0) {
    iVar2 = func_0x02c3f0e4(param_1,param_2);
    iVar1 = 0;
    if ((iVar2 != 0) && (iVar1 = iVar2, *(int *)(iVar2 + 0xc) != 0)) {
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02c3b834 + 0x2c3b1f4));
      func_0x024f0510(iVar3,**(undefined4 **)(_UNK_02c3b838 + 0x2c3b208));
      func_0x024ef7ac(&uStack_58,iVar2,**(undefined4 **)(_UNK_02c3b83c + 0x2c3b224));
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      iStack_2c = iStack_4c;
      puVar8 = *(undefined4 **)(_UNK_02c3b840 + 0x2c3b244);
      while (iVar4 = func_0x04873f24(&uStack_38,*puVar8), iVar5 = iStack_2c, iVar4 != 0) {
        if (param_2 == 0) {
          func_0x014388e4();
        }
        if (iVar5 != *(int *)(param_2 + 8)) {
          if (*(int *)(**(int **)(_UNK_02c3b844 + 0x2c3b280) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02c3b848 + 0x2c3b29c));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x029a6fa8(iVar4,iVar5,0);
          if (iVar5 != 0) {
            iVar4 = func_0x02c3f0e4(param_1);
            iVar5 = 0;
            if (iVar4 != 0) {
              iVar5 = *(int *)(iVar4 + 0xc);
            }
            if (iVar4 != 0 && iVar5 != 0) {
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              func_0x024f1618(iVar3,iVar4,**(undefined4 **)(_UNK_02c3b84c + 0x2c3b300));
            }
          }
        }
      }
      func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3b864 + 0x2c3b31c));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        func_0x024ef7ac(&uStack_58,iVar2,**(undefined4 **)(_UNK_02c3b854 + 0x2c3b350));
        uStack_38 = uStack_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        iStack_2c = iStack_4c;
        puVar7 = *(undefined4 **)(_UNK_02c3b858 + 0x2c3b370);
        puVar9 = *(undefined4 **)(_UNK_02c3b85c + 0x2c3b378);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar8), iVar5 = iStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x024f0f34(iVar3,iVar5,*puVar7);
          if (iVar4 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x024f13cc(iVar3,iVar5,*puVar9);
          }
        }
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3b860 + 0x2c3b3dc));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        func_0x024f1618(iVar2,iVar3,**(undefined4 **)(_UNK_02c3b870 + 0x2c3b40c));
        func_0x024ef7ac(&uStack_58,iVar3,**(undefined4 **)(_UNK_02c3b874 + 0x2c3b42c));
        uStack_38 = uStack_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        iStack_2c = iStack_4c;
        puVar7 = *(undefined4 **)(_UNK_02c3b878 + 0x2c3b44c);
        while( true ) {
          iVar5 = func_0x04873f24(&uStack_38,*puVar8);
          iVar3 = iStack_2c;
          if (iVar5 == 0) break;
          if (param_2 == 0) {
            func_0x014388e4();
          }
          if (iVar3 != *(int *)(param_2 + 8)) {
            if (*(int *)(**(int **)(_UNK_02c3b880 + 0x2c3b484) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c3b884 + 0x2c3b4a0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x029a6fa8(iVar5,iVar3,0);
            if (iVar3 != 0) {
              iVar5 = FUN_02c3b0a4(param_1);
              iVar3 = 0;
              if (iVar5 != 0) {
                iVar3 = *(int *)(iVar5 + 0xc);
              }
              if (iVar5 != 0 && iVar3 != 0) {
                func_0x024ef7ac(&uStack_58,iVar2,**(undefined4 **)(_UNK_02c3b888 + 0x2c3b4f8));
                uStack_48 = uStack_58;
                uStack_44 = uStack_54;
                uStack_40 = uStack_50;
                iStack_3c = iStack_4c;
                while (iVar4 = func_0x04873f24(&uStack_48,*puVar8), iVar3 = iStack_3c, iVar4 != 0) {
                  iVar4 = func_0x024f0f34(iVar5,iStack_3c,*puVar7);
                  if (iVar4 != 0) {
                    func_0x024f13cc(iVar5,iVar3,**(undefined4 **)(_UNK_02c3b88c + 0x2c3b54c));
                  }
                }
                func_0x04873f20(&uStack_48,**(undefined4 **)(_UNK_02c3b890 + 0x2c3b56c));
                func_0x024f1618(iVar2,iVar5,**(undefined4 **)(_UNK_02c3b894 + 0x2c3b590));
              }
            }
          }
        }
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3b898 + 0x2c3b5e4));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xe92,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar1;
}

