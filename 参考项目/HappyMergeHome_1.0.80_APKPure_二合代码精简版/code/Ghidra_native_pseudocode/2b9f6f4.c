
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02baf6f4(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_02baf990 + 0x2baf714);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baf994 + 0x2baf728));
    func_0x01438628(*(undefined4 *)(_UNK_02baf998 + 0x2baf734));
    func_0x01438628(*(undefined4 *)(_UNK_02baf99c + 0x2baf740));
    func_0x01438628(*(undefined4 *)(_UNK_02baf9a0 + 0x2baf74c));
    func_0x01438628(*(undefined4 *)(_UNK_02baf9a4 + 0x2baf758));
    func_0x01438628(*(undefined4 *)(_UNK_02baf9a8 + 0x2baf764));
    func_0x01438628(*(undefined4 *)(_UNK_02baf9ac + 0x2baf770));
    func_0x01438628(*(undefined4 *)(_UNK_02baf9b0 + 0x2baf77c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x02953fd4(0x5ccf,0);
  if (iVar2 == 0) {
    uVar3 = FUN_02baf084(param_1,param_3);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x046c2140(param_2,**(undefined4 **)(_UNK_02baf9b4 + 0x2baf808));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024f10ec(&uStack_48,iVar2,**(undefined4 **)(_UNK_02baf9b8 + 0x2baf834));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    puVar7 = *(undefined4 **)(_UNK_02baf9bc + 0x2baf854);
    piVar8 = *(int **)(_UNK_02baf9c0 + 0x2baf85c);
    puVar9 = *(undefined4 **)(_UNK_02baf9c4 + 0x2baf864);
    puVar6 = *(undefined4 **)(_UNK_02baf9c8 + 0x2baf86c);
    do {
      iVar2 = func_0x048a4a78(&uStack_38,*puVar7);
      uVar1 = uStack_2c;
      if (iVar2 == 0) {
        iVar2 = 6;
        goto LAB_02baf8d8;
      }
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x035e50e0(uVar3,uVar1,*puVar9);
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x046c23f8(param_2,uVar1,*puVar6);
    } while (iVar4 <= iVar2);
    iVar2 = 5;
LAB_02baf8d8:
    func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_02baf9cc + 0x2baf8e4));
    uVar3 = 0;
    if (iVar2 != 5) {
      uVar3 = 1;
    }
  }
  else {
    iVar2 = func_0x029540a4(0x5ccf,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x028952ac(iVar2,param_1,param_2,param_3,0);
  }
  return uVar3;
}

