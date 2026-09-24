
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bac548(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02bac838 + 0x2bac568);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bac83c + 0x2bac580));
    func_0x01438628(*(undefined4 *)(_UNK_02bac840 + 0x2bac58c));
    func_0x01438628(*(undefined4 *)(_UNK_02bac844 + 0x2bac598));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x5cbb,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    func_0x014385cc(param_3,0);
    *param_4 = 0;
    func_0x014385cc(param_4,0);
    piVar8 = *(int **)(_UNK_02bac848 + 0x2bac628);
    iVar1 = **(int **)(*piVar8 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02b66668(iVar1,0);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02c009b8(param_2,0,0,0,uVar2,0);
    iVar5 = 1;
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = iVar5 + -1;
      if (*(int *)(iVar1 + 0xc) <= iVar6) goto LAB_02bac774;
      iVar3 = func_0x0152983c(iVar1,iVar6,**(undefined4 **)(_UNK_02bac84c + 0x2bac6bc));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uStack_28 = func_0x02c3f4b4(iVar3,0);
      iVar3 = **(int **)(*piVar8 + 0x5c);
      uVar2 = func_0x01524ffc(&uStack_28,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x02b665b8(iVar3,uVar2,0);
      if (iVar3 != 0) break;
      iVar5 = iVar5 + 2;
    }
    puVar7 = *(undefined4 **)(_UNK_02bac850 + 0x2bac740);
    iVar6 = func_0x0152983c(iVar1,iVar6,*puVar7);
    *param_3 = iVar6;
    func_0x014385cc();
    iVar1 = func_0x0152983c(iVar1,iVar5,*puVar7);
    *param_4 = iVar1;
    func_0x014385cc();
LAB_02bac774:
    uVar2 = 0;
    iVar1 = *param_3;
    if ((iVar1 != 0) && (*param_4 != 0)) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(param_2 + 0x50);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x0152983c(iVar5,0,**(undefined4 **)(_UNK_02bac854 + 0x2bac7cc));
      if (iVar1 == iVar5) {
        iVar1 = *(int *)(param_2 + 0x50);
        iVar5 = *param_4;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0152983c(iVar1,1,**(undefined4 **)(_UNK_02bac858 + 0x2bac804));
        if (iVar5 == iVar1) {
          return 1;
        }
      }
      func_0x02bac85c(param_1,param_2,*param_3,*param_4);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cbb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028f9cac(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}

