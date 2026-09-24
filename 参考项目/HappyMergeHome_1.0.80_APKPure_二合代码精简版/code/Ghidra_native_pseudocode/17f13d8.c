
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018013d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01801ad0 + 0x18013f0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01801ad4 + 0x1801404));
    func_0x01438628(*(undefined4 *)(_UNK_01801ad8 + 0x1801410));
    func_0x01438628(*(undefined4 *)(_UNK_01801adc + 0x180141c));
    func_0x01438628(*(undefined4 *)(_UNK_01801ae0 + 0x1801428));
    func_0x01438628(*(undefined4 *)(_UNK_01801ae4 + 0x1801434));
    func_0x01438628(*(undefined4 *)(_UNK_01801ae8 + 0x1801440));
    func_0x01438628(*(undefined4 *)(_UNK_01801aec + 0x180144c));
    func_0x01438628(*(undefined4 *)(_UNK_01801af0 + 0x1801458));
    func_0x01438628(*(undefined4 *)(_UNK_01801af4 + 0x1801464));
    func_0x01438628(*(undefined4 *)(_UNK_01801af8 + 0x1801470));
    func_0x01438628(*(undefined4 *)(_UNK_01801afc + 0x180147c));
    func_0x01438628(*(undefined4 *)(_UNK_01801b00 + 0x1801488));
    func_0x01438628(*(undefined4 *)(_UNK_01801b04 + 0x1801494));
    func_0x01438628(*(undefined4 *)(_UNK_01801b08 + 0x18014a0));
    func_0x01438628(*(undefined4 *)(_UNK_01801b0c + 0x18014ac));
    func_0x01438628(*(undefined4 *)(_UNK_01801b10 + 0x18014b8));
    func_0x01438628(*(undefined4 *)(_UNK_01801b14 + 0x18014c4));
    func_0x01438628(*(undefined4 *)(_UNK_01801b18 + 0x18014d0));
    func_0x01438628(*(undefined4 *)(_UNK_01801b1c + 0x18014dc));
    func_0x01438628(*(undefined4 *)(_UNK_01801b20 + 0x18014e8));
    func_0x01438628(*(undefined4 *)(_UNK_01801b24 + 0x18014f4));
    func_0x01438628(*(undefined4 *)(_UNK_01801b28 + 0x1801500));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x13a6,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01801b2c + 0x1801564) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01801b30 + 0x1801580));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01801b34 + 0x18015a0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x238);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_01801b38 + 0x18015e8));
    if (iVar3 == 0) {
      func_0x01801b84(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01801b3c + 0x180160c));
      func_0x026f22a8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_01801b40 + 0x1801628) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_01801b44 + 0x1801644));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026f2120(iVar3,uVar2,0);
      iVar4 = func_0x01801bec(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x01801bec(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_01801b48 + 0x18016e8));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_01801b4c + 0x1801704);
        puVar9 = *(undefined4 **)(_UNK_01801b50 + 0x180170c);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x01801d24(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_01801b54 + 0x1801788));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_01801b5c + 0x18017c8));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_01801b60 + 0x18017e0);
      puVar9 = *(undefined4 **)(_UNK_01801b64 + 0x18017e8);
      while( true ) {
        iVar7 = func_0x01801bec(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x01801bec(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x024f0530(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x024f05ac(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        func_0x026f1a28(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026f1af8(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_01801b6c + 0x18018c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01801b70 + 0x18018e4));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_01801b74 + 0x1801920);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x0152983c(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_01801b78 + 0x1801960));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x0152983c(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_01801b7c + 0x18019f8));
      func_0x01801de0(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_01801b80 + 0x1801a34));
  }
  else {
    iVar1 = func_0x029540a4(0x13a6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a0c74(iVar1,param_1,0);
  }
  return;
}

