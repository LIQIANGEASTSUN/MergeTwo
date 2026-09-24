
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019f0640(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_019f09d4 + 0x19f0658);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f09d8 + 0x19f066c));
    func_0x01438628(*(undefined4 *)(_UNK_019f09dc + 0x19f0678));
    func_0x01438628(*(undefined4 *)(_UNK_019f09e0 + 0x19f0684));
    func_0x01438628(*(undefined4 *)(_UNK_019f09e4 + 0x19f0690));
    func_0x01438628(*(undefined4 *)(_UNK_019f09e8 + 0x19f069c));
    func_0x01438628(*(undefined4 *)(_UNK_019f09ec + 0x19f06a8));
    func_0x01438628(*(undefined4 *)(_UNK_019f09f0 + 0x19f06b4));
    func_0x01438628(*(undefined4 *)(_UNK_019f09f4 + 0x19f06c0));
    func_0x01438628(*(undefined4 *)(_UNK_019f09f8 + 0x19f06cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x36c3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x36c3,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_019f09fc + 0x19f0728) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_019f0a00 + 0x19f0744));
  iVar1 = iVar6;
  if (iVar6 == 0) {
    iVar1 = func_0x014388e4();
  }
  iVar6 = *(int *)(iVar6 + 0x20);
  if (iVar6 != 0) {
    iVar1 = *(int *)(iVar6 + 0xc);
  }
  if (iVar6 != 0 && iVar1 != 0) {
    iVar1 = FUN_019edb58(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f0708(iVar1,**(undefined4 **)(_UNK_019f0a0c + 0x19f07d8));
    if (0 < *(int *)(iVar6 + 0xc)) {
      iVar1 = 0;
      puVar8 = *(undefined4 **)(_UNK_019f0a10 + 0x19f07fc);
      puVar9 = *(undefined4 **)(_UNK_019f0a14 + 0x19f0804);
      puVar10 = *(undefined4 **)(_UNK_019f0a18 + 0x19f080c);
      do {
        iVar2 = func_0x014388d4(*puVar8);
        func_0x026bad50(iVar2,0);
        iVar3 = func_0x0152983c(iVar6,iVar1,*puVar9);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026cd024(iVar2,uVar7,0);
        iVar3 = func_0x0152983c(iVar6,iVar1,*puVar9);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
          func_0x026cd19c(0,uVar7,0);
          func_0x014388e4();
        }
        else {
          func_0x026cd19c(iVar2,uVar7,0);
        }
        func_0x026ccf68(iVar2,0,0);
        iVar3 = func_0x0152983c(iVar6,iVar1,*puVar9);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x1c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026cd48c(iVar2,uVar7,0);
        iVar3 = func_0x0152983c(iVar6,iVar1,*puVar9);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x18);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026cd548(iVar2,uVar7,0);
        iVar3 = func_0x0152983c(iVar6,iVar1,*puVar9);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026cd0e0(iVar2,uVar7,0);
        iVar3 = FUN_019edb58(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x28);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x024f0f08(iVar3,iVar2,*puVar10);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(iVar6 + 0xc));
    }
    return;
  }
  if (*(int *)(**(int **)(_UNK_019f0a04 + 0x19f0778) + 0x74) == 0) {
    func_0x014387a4();
  }
  (*(code *)&UNK_05d059b8)(**(undefined4 **)(_UNK_019f0a08 + 0x19f0798),0);
  return;
}

