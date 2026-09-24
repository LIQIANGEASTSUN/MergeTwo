
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b9f858(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02b9fc3c + 0x2b9f870);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc40 + 0x2b9f884));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc44 + 0x2b9f890));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc48 + 0x2b9f89c));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc4c + 0x2b9f8a8));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc50 + 0x2b9f8b4));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc54 + 0x2b9f8c0));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc58 + 0x2b9f8cc));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc5c + 0x2b9f8d8));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc60 + 0x2b9f8e4));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc64 + 0x2b9f8f0));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fc68 + 0x2b9f8fc));
    *pcVar7 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x02953fd4(0xe71,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_02b9fc6c + 0x2b9f95c);
    iVar1 = **(int **)(*piVar10 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,5,0,0);
    if (iVar1 == 0) {
      iVar1 = **(int **)(*piVar10 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x02b67d68(iVar1,5,0);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0xc);
        iVar1 = iVar2;
      }
      if (iVar2 != 0 && iVar3 != 0) {
        iVar3 = **(int **)(**(int **)(_UNK_02b9fc70 + 0x2b9f9dc) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x02c3d868(iVar3,0);
        uVar4 = func_0x0152983c(iVar1,0,**(undefined4 **)(_UNK_02b9fc74 + 0x2b9fa10));
        uVar4 = func_0x024eeee8(uVar4,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02bebda0(iVar3,uVar4,0);
        if (iVar1 != 0) {
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02b9fc78 + 0x2b9fa58));
          func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_02b9fc7c + 0x2b9fa6c));
          iVar2 = *(int *)(iVar1 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024eecb8(iVar2,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar3 + 8);
          uVar8 = *(uint *)(iVar3 + 0xc);
          piVar6 = *(int **)(_UNK_02b9fc80 + 0x2b9fac0);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar11 = *piVar6;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (uVar8 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar8 + 1;
            puVar5 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
            *puVar5 = uVar4;
            func_0x014385cc(puVar5,uVar4);
          }
          else {
            func_0x0152874c(iVar3,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
          iVar2 = *(int *)(iVar1 + 0xc);
          iVar1 = **(int **)(*piVar10 + 0x5c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          piVar6 = (int *)func_0x024eecb8(iVar2,0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          piVar9 = (int *)0x0;
          if ((piVar6 != (int *)0x0) &&
             (piVar9 = piVar6, *piVar6 != **(int **)(_UNK_02b9fc84 + 0x2b9fb5c))) {
            piVar9 = (int *)0x0;
          }
          func_0x02b647b4(iVar1,3,piVar9,0,0,1,iVar3,0);
          if (*(int *)(**(int **)(_UNK_02b9fc88 + 0x2b9fb9c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02b9fc8c + 0x2b9fbb8));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_24 = func_0x02d0fe1c(iVar1,0);
          uVar4 = func_0x01524ffc(&uStack_24,0);
          uVar4 = func_0x014e9568(**(undefined4 **)(_UNK_02b9fc90 + 0x2b9fc00),uVar4,0);
          iVar1 = **(int **)(*piVar10 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02b6127c(iVar1,5,uVar4,0,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xe71,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

