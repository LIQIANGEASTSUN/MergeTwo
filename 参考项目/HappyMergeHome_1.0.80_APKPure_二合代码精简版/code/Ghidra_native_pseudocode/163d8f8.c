
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164d8f8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0164ddc0 + 0x164d910);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164ddc4 + 0x164d924));
    func_0x01438628(*(undefined4 *)(_UNK_0164ddc8 + 0x164d930));
    func_0x01438628(*(undefined4 *)(_UNK_0164ddcc + 0x164d93c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x200b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x200b,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar2 = FUN_01642704(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x6c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar2 + 0x14) == '\0') {
    bVar9 = true;
    iVar2 = 0;
    iVar6 = 0;
    puVar10 = *(undefined4 **)(_UNK_0164ddd0 + 0x164d9e4);
    puVar11 = *(undefined4 **)(_UNK_0164ddd4 + 0x164d9ec);
    while( true ) {
      iVar3 = FUN_01642704(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x6c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar2) break;
      iVar3 = FUN_01642704(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x6c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar3 + 0x10);
      iVar3 = FUN_01642704(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x6c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x24);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024f0f34(iVar7,uVar8,*puVar11);
      if (iVar3 != 0) {
        iVar3 = FUN_01642704(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x6c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar3 + 9) != '\0') {
          iVar3 = FUN_01642704(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x6c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar6 = iVar6 + (*(byte *)(iVar3 + 0xd) ^ 1);
        }
        iVar3 = FUN_01642704(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x6c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        bVar1 = *(byte *)(iVar3 + 0xc);
        iVar3 = FUN_01642704(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x6c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar6 = iVar6 + (bVar1 ^ 1) + (*(byte *)(iVar3 + 0x28) ^ 1);
      }
      iVar3 = FUN_01642704(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x6c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar3 + 0xc) == '\0') {
LAB_0164dd68:
        bVar9 = false;
      }
      else {
        iVar3 = FUN_01642704(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x6c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar3 + 0xd) == '\0') goto LAB_0164dd68;
        iVar3 = FUN_01642704(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x6c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e9698(iVar3,iVar2,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar3 + 0x28) == '\0') {
          bVar9 = false;
        }
      }
      iVar2 = iVar2 + 1;
    }
    if (bVar9) {
      iVar2 = FUN_01642704(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x6c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026ec720(iVar2,1,0);
    }
    *(int *)(param_1 + 0x54) = iVar6;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

