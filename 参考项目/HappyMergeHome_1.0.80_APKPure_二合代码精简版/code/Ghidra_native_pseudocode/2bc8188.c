
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bd8188(undefined4 param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  
  pcVar2 = (char *)(_UNK_02bd8340 + 0x2bd81a8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd8344 + 0x2bd81c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd8348 + 0x2bd81cc));
    *pcVar2 = '\x01';
  }
  iVar3 = 0;
  iVar1 = func_0x02953fd4(0xd63,0);
  if (iVar1 == 0) {
    if ((param_2 != 0 && param_3 != 0) && (iVar1 = FUN_02baed04(param_1,param_3), iVar1 - 3U < 2)) {
      if (*(int *)(**(int **)(_UNK_02bd834c + 0x2bd8264) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd8350 + 0x2bd8280));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x026ffbe0(iVar1,0);
      iVar1 = *(int *)(param_3 + 0x70);
      uVar4 = *(uint *)(param_2 + 0x58);
      iVar5 = *(int *)(param_2 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) < 2) {
        func_0x014388e8();
      }
      iVar3 = 0;
      uVar9 = func_0x014e6e04((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1000,0);
      dVar8 = (double)func_0x014e63e0((uint)uVar9 - uVar4,
                                      (int)((ulonglong)uVar9 >> 0x20) -
                                      (iVar5 + (uint)((uint)uVar9 < uVar4)));
      iVar5 = *(int *)(iVar1 + 0x14);
      fVar7 = (float)dVar8;
      uVar4 = in_fpscr & 0xfffffff | (uint)(fVar7 == _UNK_02bd833c) << 0x1e;
      iVar1 = (int)dVar8;
      fVar6 = (float)VectorSignedToFloat(iVar5 * 0x3c,(byte)(uVar4 >> 0x16) & 3);
      if (SUB41(uVar4 >> 0x1e,0)) {
        iVar1 = -0x80000000;
      }
      *param_4 = fVar7 / fVar6;
      if (fVar7 < fVar6) {
        iVar3 = iVar5 * 0x3c - iVar1;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xd63,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02892bb0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar3;
}

