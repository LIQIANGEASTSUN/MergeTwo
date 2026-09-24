
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bdf804(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02bdfc30 + 0x2bdf824);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdfc34 + 0x2bdf83c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfc38 + 0x2bdf848));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfc3c + 0x2bdf854));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfc40 + 0x2bdf860));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfc44 + 0x2bdf86c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfc48 + 0x2bdf878));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfc4c + 0x2bdf884));
    func_0x01438628(*(undefined4 *)(_UNK_02bdfc50 + 0x2bdf890));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3449,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x03b780b0(iVar1,param_2,**(undefined4 **)(_UNK_02bdfc54 + 0x2bdf924));
    *param_3 = uVar2;
    func_0x014385cc(param_3,uVar2);
    iVar1 = FUN_02bad050(param_1,param_4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b77b90(iVar1,param_2,**(undefined4 **)(_UNK_02bdfc58 + 0x2bdf978));
    iVar1 = *(int *)(**(int **)(_UNK_02bdfc5c + 0x2bdf990) + 0x74);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (iVar1 == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bdfc60 + 0x2bdf9b0));
    piVar7 = *(int **)(_UNK_02bdfc64 + 0x2bdf9c4);
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar7;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
    piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bdfc68 + 0x2bdf9e8),5);
    puVar8 = *(undefined4 **)(_UNK_02bdfc6c + 0x2bdfa08);
    uStack_24 = 0;
    iVar3 = func_0x014387ac(*puVar8,&uStack_24);
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar7[3] == 0) {
      func_0x014388e8();
    }
    piVar7[4] = iVar3;
    func_0x014385cc(piVar7 + 4,iVar3);
    uStack_28 = 0;
    iVar3 = func_0x014387ac(*puVar8,&uStack_28);
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar7[3] < 2) {
      func_0x014388e8();
    }
    piVar7[5] = iVar3;
    func_0x014385cc(piVar7 + 5,iVar3);
    uStack_2c = 0;
    iVar3 = func_0x014387ac(*puVar8,&uStack_2c);
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar7[3] < 3) {
      func_0x014388e8();
    }
    piVar7[6] = iVar3;
    func_0x014385cc(piVar7 + 6,iVar3);
    uStack_30 = 1;
    iVar3 = func_0x014387ac(**(undefined4 **)(_UNK_02bdfc70 + 0x2bdfb48),&uStack_30);
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar7[3] < 4) {
      func_0x014388e8();
    }
    piVar7[7] = iVar3;
    func_0x014385cc(piVar7 + 7,iVar3);
    uStack_34 = 0;
    iVar3 = func_0x014387ac(*puVar8,&uStack_34);
    if ((iVar3 != 0) && (iVar4 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar7[3] < 5) {
      func_0x014388e8();
    }
    piVar7[8] = iVar3;
    func_0x014385cc(piVar7 + 8,iVar3);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar1,uVar2,piVar7,0);
  }
  else {
    iVar1 = func_0x029540a4(0x3449,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028cef34(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

