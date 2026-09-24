
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019eee60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_019ef1b0 + 0x19eee80);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019ef1b4 + 0x19eee94));
    func_0x01438628(*(undefined4 *)(_UNK_019ef1b8 + 0x19eeea0));
    func_0x01438628(*(undefined4 *)(_UNK_019ef1bc + 0x19eeeac));
    func_0x01438628(*(undefined4 *)(_UNK_019ef1c0 + 0x19eeeb8));
    func_0x01438628(*(undefined4 *)(_UNK_019ef1c4 + 0x19eeec4));
    func_0x01438628(*(undefined4 *)(_UNK_019ef1c8 + 0x19eeed0));
    func_0x01438628(*(undefined4 *)(_UNK_019ef1cc + 0x19eeedc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x372f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_019ef1d0 + 0x19eef44));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar8 = (undefined4 *)(iVar1 + 8);
    *puVar8 = param_2;
    iVar3 = FUN_019e8374(param_1,param_2);
    if (*(int *)(**(int **)(_UNK_019ef1d4 + 0x19eef84) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_019ef1d8 + 0x19eefa0));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar4 + 0x18);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_019ef1dc + 0x19eefc0));
    uVar2 = 0;
    func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_019ef1e0 + 0x19eefe4),0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0618(iVar4,uVar5,**(undefined4 **)(_UNK_019ef1e4 + 0x19ef008));
    if (iVar1 != 0) {
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar3 + 0xc) != '\0') {
        func_0x026c1f5c(iVar3,*(int *)(iVar3 + 8) + param_3,0);
        if (*(int *)(**(int **)(_UNK_019ef1e8 + 0x19ef054) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(puVar8,0);
        uStack_28 = *(undefined4 *)(iVar3 + 8);
        uVar5 = func_0x01524ffc(&uStack_28,0);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar4,0x20a,uVar2,uVar5,0,0,0);
        iVar6 = *(int *)(iVar1 + 0x18);
        iVar4 = *(int *)(iVar3 + 8);
        if (iVar6 < iVar4) {
          func_0x026c1f5c(iVar3,iVar6,0);
          iVar6 = *(int *)(iVar1 + 0x18);
          iVar4 = *(int *)(iVar3 + 8);
        }
        uVar2 = 0;
        if (iVar6 <= iVar4) {
          if (*(int *)(**(int **)(_UNK_019ef1ec + 0x19ef118) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          uVar2 = func_0x01524ffc(puVar8,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar3,0x20b,uVar2,0,0,0,0);
          func_0x019ef1f8(param_1,*puVar8);
          func_0x019ef4bc(param_1,iVar1);
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x372f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028d207c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

