
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02baf9d8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_02bafc70 + 0x2baf9f8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bafc74 + 0x2bafa0c));
    func_0x01438628(*(undefined4 *)(_UNK_02bafc78 + 0x2bafa18));
    func_0x01438628(*(undefined4 *)(_UNK_02bafc7c + 0x2bafa24));
    func_0x01438628(*(undefined4 *)(_UNK_02bafc80 + 0x2bafa30));
    func_0x01438628(*(undefined4 *)(_UNK_02bafc84 + 0x2bafa3c));
    func_0x01438628(*(undefined4 *)(_UNK_02bafc88 + 0x2bafa48));
    func_0x01438628(*(undefined4 *)(_UNK_02bafc8c + 0x2bafa54));
    func_0x01438628(*(undefined4 *)(_UNK_02bafc90 + 0x2bafa60));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x02953fd4(0x5cd0,0);
  if (iVar2 == 0) {
    uVar4 = FUN_02baf084(param_1,param_3);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x046c2140(param_2,**(undefined4 **)(_UNK_02bafc94 + 0x2bafaf0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024f10ec(&uStack_48,iVar2,**(undefined4 **)(_UNK_02bafc98 + 0x2bafb1c));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    puVar8 = *(undefined4 **)(_UNK_02bafc9c + 0x2bafb3c);
    piVar7 = *(int **)(_UNK_02bafca0 + 0x2bafb44);
    puVar9 = *(undefined4 **)(_UNK_02bafca4 + 0x2bafb4c);
    do {
      uVar3 = func_0x048a4a78(&uStack_38,*puVar8);
      uVar1 = uStack_2c;
      if (uVar3 == 0) break;
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x046c23f8(param_2,uVar1,**(undefined4 **)(_UNK_02bafca8 + 0x2bafb7c));
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x035e50e0(uVar4,uVar1,*puVar9);
    } while (iVar2 <= iVar5);
    func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_02bafcac + 0x2bafbc4));
    uVar3 = uVar3 ^ 1;
  }
  else {
    iVar2 = func_0x029540a4(0x5cd0,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x028952ac(iVar2,param_1,param_2,param_3,0);
  }
  return uVar3;
}

