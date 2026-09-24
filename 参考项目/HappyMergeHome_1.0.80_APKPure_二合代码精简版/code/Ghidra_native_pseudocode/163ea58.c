
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0164ea58(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 uStack_21;
  
  pcVar6 = (char *)(_UNK_0164ec90 + 0x164ea74);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164ec94 + 0x164ea88));
    func_0x01438628(*(undefined4 *)(_UNK_0164ec98 + 0x164ea94));
    func_0x01438628(*(undefined4 *)(_UNK_0164ec9c + 0x164eaa0));
    func_0x01438628(*(undefined4 *)(_UNK_0164eca0 + 0x164eaac));
    func_0x01438628(*(undefined4 *)(_UNK_0164eca4 + 0x164eab8));
    func_0x01438628(*(undefined4 *)(_UNK_0164eca8 + 0x164eac4));
    func_0x01438628(*(undefined4 *)(_UNK_0164ecac + 0x164ead0));
    func_0x01438628(*(undefined4 *)(_UNK_0164ecb0 + 0x164eadc));
    *pcVar6 = '\x01';
  }
  uStack_21 = 0;
  iVar1 = func_0x02953fd4(0x863e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0164ecb4 + 0x164eb44));
    func_0x01653810(iVar1,0);
    if (*(int *)(**(int **)(_UNK_0164ecb8 + 0x164eb60) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0164ecbc + 0x164eb7c));
    iVar4 = iVar3;
    if (iVar3 == 0) {
      iVar4 = func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x38);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (0x7fffffff < param_2) {
        param_2 = func_0x0164ecd0(param_1);
      }
      iVar4 = func_0x0164ed8c(param_1,param_2,&uStack_21);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar7 = (int *)(iVar1 + 8);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
      if (*piVar7 != 0) {
        uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0164ecc0 + 0x164ec14));
        uVar2 = 0;
        func_0x024f0614(uVar5,iVar1,**(undefined4 **)(_UNK_0164ecc4 + 0x164ec34),0);
        iVar1 = func_0x024f0618(iVar3,uVar5,**(undefined4 **)(_UNK_0164ecc8 + 0x164ec4c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar1 + 0x28) + -1) {
          uVar2 = func_0x0152983c(iVar3,*(int *)(iVar1 + 0x28) + -2,
                                  **(undefined4 **)(_UNK_0164eccc + 0x164ec80));
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x863e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02921a68(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

