
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc4cf0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01bc502c + 0x1bc4d0c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc5030 + 0x1bc4d20));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5034 + 0x1bc4d2c));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5038 + 0x1bc4d38));
    func_0x01438628(*(undefined4 *)(_UNK_01bc503c + 0x1bc4d44));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5040 + 0x1bc4d50));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5044 + 0x1bc4d5c));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5048 + 0x1bc4d68));
    func_0x01438628(*(undefined4 *)(_UNK_01bc504c + 0x1bc4d74));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5050 + 0x1bc4d80));
    func_0x01438628(*(undefined4 *)(_UNK_01bc5054 + 0x1bc4d8c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2d53,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01bc5058 + 0x1bc4de8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bc505c + 0x1bc4e04));
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(param_2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x020ab914(iVar1,uVar6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    uVar7 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(**(int **)(_UNK_01bc5060 + 0x1bc4e54) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x02af43a8(uVar6,uVar7,0);
    if (*(int *)(**(int **)(_UNK_01bc5064 + 0x1bc4e8c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x0202346c(0);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_1c = func_0x024f0530(iVar1,0,**(undefined4 **)(_UNK_01bc5068 + 0x1bc4ecc));
    uVar6 = func_0x01524ffc(&uStack_1c,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x020257a4(iVar3,0x267,uVar6,**(undefined4 **)(_UNK_01bc506c + 0x1bc4f08),0,0,0);
    if (*(int *)(**(int **)(_UNK_01bc5070 + 0x1bc4f3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01bc5074 + 0x1bc4f58));
    piVar5 = *(int **)(_UNK_01bc5078 + 0x1bc4f6c);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
      iVar3 = *piVar5;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1ac);
    piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01bc507c + 0x1bc4f90),1);
    if (piVar5 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)
       ) {
      uVar7 = func_0x01438904();
      func_0x01438790(uVar7,0);
    }
    if (piVar5[3] == 0) {
      func_0x014388e8();
    }
    piVar5[4] = iVar2;
    func_0x014385cc(piVar5 + 4,iVar2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar6,piVar5,0);
    func_0x01bc5080(param_1,iVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x2d53,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

