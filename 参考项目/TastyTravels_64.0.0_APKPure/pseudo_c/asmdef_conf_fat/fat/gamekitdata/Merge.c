/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.Merge$$.ctor RVA 0x177d080 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0178d080(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_0178d2e0 + 0x178d094);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0178d2e4 + 0x178d0a8));
    func_0x01384978(*(undefined4 *)(_UNK_0178d2e8 + 0x178d0b4));
    func_0x01384978(*(undefined4 *)(_UNK_0178d2ec + 0x178d0c0));
    func_0x01384978(*(undefined4 *)(_UNK_0178d2f0 + 0x178d0cc));
    func_0x01384978(*(undefined4 *)(_UNK_0178d2f4 + 0x178d0d8));
    func_0x01384978(*(undefined4 *)(_UNK_0178d2f8 + 0x178d0e4));
    func_0x01384978(*(undefined4 *)(_UNK_0178d2fc + 0x178d0f0));
    func_0x01384978(*(undefined4 *)(_UNK_0178d300 + 0x178d0fc));
    func_0x01384978(*(undefined4 *)(_UNK_0178d304 + 0x178d108));
    func_0x01384978(*(undefined4 *)(_UNK_0178d308 + 0x178d114));
    func_0x01384978(*(undefined4 *)(_UNK_0178d30c + 0x178d120));
    func_0x01384978(*(undefined4 *)(_UNK_0178d310 + 0x178d12c));
    func_0x01384978(*(undefined4 *)(_UNK_0178d314 + 0x178d138));
    func_0x01384978(*(undefined4 *)(_UNK_0178d318 + 0x178d144));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0178d31c + 0x178d158);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0178d320 + 0x178d16c);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_0178d324 + 0x178d194);
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0178d328 + 0x178d1ac));
  puVar3 = *(undefined4 **)(_UNK_0178d32c + 0x178d1c0);
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_0178d330 + 0x178d1d8));
  puVar3 = *(undefined4 **)(_UNK_0178d334 + 0x178d1ec);
  param_1[0x14] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0178d338 + 0x178d204));
  puVar3 = *(undefined4 **)(_UNK_0178d33c + 0x178d218);
  param_1[0x15] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_0178d340 + 0x178d230));
  uVar2 = *puVar6;
  param_1[0x16] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0x17] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_0178d344 + 0x178d274);
  param_1[0x1b] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0178d348 + 0x178d28c));
  piVar4 = *(int **)(_UNK_0178d34c + 0x178d2a0);
  param_1[0x1c] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0178d350 + 0x178d2c0));
                    /* WARNING: Could not recover jumptable at 0x0178d2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.Merge$$.ctor RVA 0x178acd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179acd8(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pcVar4 = (char *)(_UNK_0179afc0 + 0x179acf4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179afc4 + 0x179ad08));
    func_0x01384978(*(undefined4 *)(_UNK_0179afc8 + 0x179ad14));
    func_0x01384978(*(undefined4 *)(_UNK_0179afcc + 0x179ad20));
    func_0x01384978(*(undefined4 *)(_UNK_0179afd0 + 0x179ad2c));
    func_0x01384978(*(undefined4 *)(_UNK_0179afd4 + 0x179ad38));
    func_0x01384978(*(undefined4 *)(_UNK_0179afd8 + 0x179ad44));
    *pcVar4 = '\x01';
  }
  FUN_0178d080(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_0179afdc + 0x179ad9c);
  uVar1 = func_0x0364acbc(iVar8,*puVar7);
  iVar8 = *(int *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar8,*puVar7);
  iVar8 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar8,**(undefined4 **)(_UNK_0179afe0 + 0x179adf8));
  iVar8 = *(int *)(param_2 + 0x50);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar8,**(undefined4 **)(_UNK_0179afe4 + 0x179ae40));
  iVar8 = *(int *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar8,**(undefined4 **)(_UNK_0179afe8 + 0x179ae68));
  iVar8 = *(int *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar8,**(undefined4 **)(_UNK_0179afec + 0x179ae90));
  iVar8 = *(int *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar8,*puVar7);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar3 = 0;
  piVar2 = *(int **)(param_2 + 0x60);
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar2 + 0x140))(piVar2,*(undefined4 *)(*piVar2 + 0x144));
  }
  piVar2 = *(int **)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 0x140))(piVar2,*(undefined4 *)(*piVar2 + 0x144));
  }
  piVar2 = *(int **)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 100) = uVar3;
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*piVar2 + 0x140))(piVar2,*(undefined4 *)(*piVar2 + 0x144));
  }
  iVar8 = *(int *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar8,*puVar7);
  iVar8 = *(int *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar8,**(undefined4 **)(_UNK_0179aff0 + 0x179af70));
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  piVar2 = *(int **)(param_2 + 0x74);
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*piVar2 + 0x140))(piVar2,*(undefined4 *)(*piVar2 + 0x144));
  }
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.Merge$$Clone RVA 0x178aff4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179aff4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179b048 + 0x179b008);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179b04c + 0x179b01c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179b050 + 0x179b030));
  FUN_0179acd8(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.Merge$$InternalWriteTo RVA 0x178b054 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179b054(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_0179b5dc + 0x179b070);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179b5e0 + 0x179b084));
    func_0x01384978(*(undefined4 *)(_UNK_0179b5e4 + 0x179b090));
    func_0x01384978(*(undefined4 *)(_UNK_0179b5e8 + 0x179b09c));
    func_0x01384978(*(undefined4 *)(_UNK_0179b5ec + 0x179b0a8));
    func_0x01384978(*(undefined4 *)(_UNK_0179b5f0 + 0x179b0b4));
    func_0x01384978(*(undefined4 *)(_UNK_0179b5f4 + 0x179b0c0));
    func_0x01384978(*(undefined4 *)(_UNK_0179b5f8 + 0x179b0cc));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,0x18,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
    func_0x01485198(param_2,0x20,0);
    func_0x01485078(param_2,extraout_r1,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x01485198(param_2,0x28,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x18),0);
  }
  piVar5 = *(int **)(_UNK_0179b5fc + 0x179b16c);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0179b600 + 0x179b1b0);
  func_0x0364b6d8(iVar3,param_2,uVar4,*puVar6);
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x01485198(param_2,0x48,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x20),0);
  }
  iVar1 = *piVar5;
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0364b6d8(iVar3,param_2,uVar4,*puVar6);
  iVar1 = *(int *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x036526e0(iVar1,param_2,uVar4,**(undefined4 **)(_UNK_0179b604 + 0x179b258));
  if (*(int *)(param_1 + 0x30) != 0 || *(int *)(param_1 + 0x34) != 0) {
    func_0x014851a8(param_2,0x80,1,0);
    func_0x01485078(param_2,extraout_r1_00,*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                    0);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x014851a8(param_2,0x90,1,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x38),0);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x014851a8(param_2,0xa0,1,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x3c),0);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x014851a8(param_2,0xa8,1,0);
    func_0x01485108(param_2,*(undefined4 *)(param_1 + 0x40),0);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x014851a8(param_2,0xb0,1,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x44),0);
  }
  if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x4c) != 0) {
    func_0x014851a8(param_2,0xb8,1,0);
    func_0x01485068(param_2,extraout_r1_01,*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                    0);
  }
  iVar1 = *piVar5;
  iVar3 = *(int *)(param_1 + 0x50);
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x03466600(iVar3,param_2,uVar4,**(undefined4 **)(_UNK_0179b608 + 0x179b3d0));
  iVar1 = *(int *)(param_1 + 0x54);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x036526e0(iVar1,param_2,uVar4,**(undefined4 **)(_UNK_0179b60c + 0x179b408));
  iVar1 = *(int *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03466600(iVar1,param_2,uVar4,**(undefined4 **)(_UNK_0179b610 + 0x179b440));
  iVar1 = *(int *)(param_1 + 0x5c);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0364b6d8(iVar1,param_2,uVar4,*puVar6);
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x014851a8(param_2,0xe2,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x60),0);
  }
  if (*(int *)(param_1 + 100) != 0) {
    func_0x014851a8(param_2,0xea,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 100),0);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    func_0x014851a8(param_2,0xf2,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x68),0);
  }
  iVar1 = *piVar5;
  iVar3 = *(int *)(param_1 + 0x6c);
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0364b6d8(iVar3,param_2,uVar4,*puVar6);
  iVar1 = *(int *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x036526e0(iVar1,param_2,uVar4,**(undefined4 **)(_UNK_0179b614 + 0x179b57c));
  if (*(int *)(param_1 + 0x74) != 0) {
    func_0x014851a8(param_2,0x8a,2,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x74),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.Merge$$ProxyCalculateSize RVA 0x178b618 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179b618(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  pcVar3 = (char *)(_UNK_0179bc58 + 0x179b62c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179bc5c + 0x179b640));
    func_0x01384978(*(undefined4 *)(_UNK_0179bc60 + 0x179b64c));
    func_0x01384978(*(undefined4 *)(_UNK_0179bc64 + 0x179b658));
    func_0x01384978(*(undefined4 *)(_UNK_0179bc68 + 0x179b664));
    func_0x01384978(*(undefined4 *)(_UNK_0179bc6c + 0x179b670));
    func_0x01384978(*(undefined4 *)(_UNK_0179bc70 + 0x179b67c));
    func_0x01384978(*(undefined4 *)(_UNK_0179bc74 + 0x179b688));
    func_0x01384978(*(undefined4 *)(_UNK_0179bc78 + 0x179b694));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179bc7c + 0x179b6b8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244f9ec(iVar4,0);
    iVar4 = iVar4 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0 || iVar5 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bc80 + 0x179b6f8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244f9cc(iVar1,iVar5,0);
    iVar4 = iVar4 + iVar1 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bc84 + 0x179b738) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244f9ec(iVar1,0);
    iVar4 = iVar4 + iVar1 + 1;
  }
  piVar10 = *(int **)(_UNK_0179bc88 + 0x179b768);
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar10;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_0179bc8c + 0x179b7a8);
  iVar1 = func_0x0364b314(iVar5,uVar8,*puVar9);
  iVar5 = *(int *)(param_1 + 0x20);
  iVar1 = iVar1 + iVar4;
  if (iVar5 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bc90 + 0x179b7c8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244f9ec(iVar5,0);
    iVar1 = iVar1 + iVar4 + 1;
  }
  iVar4 = *piVar10;
  iVar5 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar10;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0364b314(iVar5,uVar8,*puVar9);
  iVar5 = *(int *)(param_1 + 0x28);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0365231c(iVar5,uVar8,**(undefined4 **)(_UNK_0179bc94 + 0x179b860));
  iVar2 = *(int *)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x34);
  iVar5 = iVar4 + iVar1 + iVar5;
  if (iVar2 != 0 || iVar6 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bc98 + 0x179b884) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244f9cc(iVar2,iVar6,0);
    iVar5 = iVar5 + iVar4 + 2;
  }
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bc9c + 0x179b8c4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244f9ec(iVar4,0);
    iVar5 = iVar5 + iVar4 + 2;
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bca0 + 0x179b900) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244f9ec(iVar4,0);
    iVar5 = iVar5 + iVar4 + 2;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bca4 + 0x179b93c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fa80(iVar4,0);
    iVar5 = iVar5 + iVar4 + 2;
  }
  iVar4 = *(int *)(param_1 + 0x44);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bca8 + 0x179b97c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244f9ec(iVar4,0);
    iVar5 = iVar5 + iVar4 + 2;
  }
  iVar4 = *(int *)(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar4 != 0 || iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bcac + 0x179b9b8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fa4c(iVar4,iVar1,0);
    iVar5 = iVar5 + iVar4 + 2;
  }
  iVar4 = *piVar10;
  iVar1 = *(int *)(param_1 + 0x50);
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar10;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x034667bc(iVar1,uVar8,**(undefined4 **)(_UNK_0179bcb0 + 0x179ba20));
  iVar1 = *(int *)(param_1 + 0x54);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0365231c(iVar1,uVar8,**(undefined4 **)(_UNK_0179bcb4 + 0x179ba58));
  iVar2 = *(int *)(param_1 + 0x58);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x18);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x034667bc(iVar2,uVar8,**(undefined4 **)(_UNK_0179bcb8 + 0x179ba90));
  iVar6 = *(int *)(param_1 + 0x5c);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x1c);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x0364b314(iVar6,uVar8,*puVar9);
  iVar7 = *(int *)(param_1 + 0x60);
  iVar6 = iVar4 + iVar5 + iVar1 + iVar2 + iVar6;
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bcbc + 0x179bae4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fa3c(iVar7,0);
    iVar6 = iVar6 + iVar4 + 2;
  }
  iVar4 = *(int *)(param_1 + 100);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bcc0 + 0x179bb20) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fa3c(iVar4,0);
    iVar6 = iVar6 + iVar4 + 2;
  }
  iVar4 = *(int *)(param_1 + 0x68);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bcc4 + 0x179bb5c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fa3c(iVar4,0);
    iVar6 = iVar6 + iVar4 + 2;
  }
  iVar4 = *piVar10;
  iVar1 = *(int *)(param_1 + 0x6c);
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar10;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0364b314(iVar1,uVar8,*puVar9);
  iVar1 = *(int *)(param_1 + 0x70);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0365231c(iVar1,uVar8,**(undefined4 **)(_UNK_0179bcc8 + 0x179bbf0));
  iVar5 = *(int *)(param_1 + 0x74);
  iVar1 = iVar4 + iVar6 + iVar1;
  if (iVar5 != 0) {
    if (*(int *)(**(int **)(_UNK_0179bccc + 0x179bc14) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fa3c(iVar5,0);
    iVar1 = iVar1 + iVar4 + 2;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar4 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar1 = iVar4 + iVar1;
  }
  return iVar1;
}



// ===== fat.gamekitdata.Merge$$ProxyInternalMergeFrom RVA 0x178bcd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179bcd0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  
  pcVar6 = (char *)(_UNK_0179c2dc + 0x179bcec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179c2e0 + 0x179bd00));
    func_0x01384978(*(undefined4 *)(_UNK_0179c2e4 + 0x179bd0c));
    func_0x01384978(*(undefined4 *)(_UNK_0179c2e8 + 0x179bd18));
    func_0x01384978(*(undefined4 *)(_UNK_0179c2ec + 0x179bd24));
    func_0x01384978(*(undefined4 *)(_UNK_0179c2f0 + 0x179bd30));
    func_0x01384978(*(undefined4 *)(_UNK_0179c2f4 + 0x179bd3c));
    func_0x01384978(*(undefined4 *)(_UNK_0179c2f8 + 0x179bd48));
    func_0x01384978(*(undefined4 *)(_UNK_0179c2fc + 0x179bd54));
    func_0x01384978(*(undefined4 *)(_UNK_0179c300 + 0x179bd60));
    func_0x01384978(*(undefined4 *)(_UNK_0179c304 + 0x179bd6c));
    func_0x01384978(*(undefined4 *)(_UNK_0179c308 + 0x179bd78));
    *pcVar6 = '\x01';
  }
  iVar7 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar7,0);
  if (uVar1 != 0) {
    piVar10 = *(int **)(_UNK_0179c30c + 0x179bdbc);
    puVar9 = *(undefined4 **)(_UNK_0179c310 + 0x179bdc4);
    do {
      if (uVar1 < 0xa9) {
        if (uVar1 < 0x49) {
          if (uVar1 < 0x29) {
            if (uVar1 == 0x18) {
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else if (uVar1 == 0x20) {
              uVar11 = func_0x01484f88(param_2,iVar7,0);
              puVar5 = (undefined8 *)(param_1 + 0x10);
LAB_0179c250:
              *puVar5 = uVar11;
            }
            else {
              if (uVar1 != 0x28) goto LAB_0179c120;
              uVar2 = func_0x01484f98(param_2,iVar7,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
          }
          else {
            if (uVar1 == 0x30 || uVar1 == 0x32) {
              iVar3 = *piVar10;
              iVar8 = *(int *)(param_1 + 0x1c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar10;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
              goto LAB_0179c02c;
            }
            if (uVar1 != 0x48) goto LAB_0179c120;
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
        }
        else if (uVar1 < 0x5b) {
          if (uVar1 != 0x50 && uVar1 != 0x52) {
            if (uVar1 == 0x5a) {
              iVar3 = *piVar10;
              iVar8 = *(int *)(param_1 + 0x28);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar10;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_0179c314 + 0x179c100);
              goto LAB_0179c2a8;
            }
            goto LAB_0179c120;
          }
          iVar3 = *piVar10;
          iVar8 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar10;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_0179c02c:
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar8,param_2,uVar2,*puVar9);
        }
        else if (uVar1 < 0x91) {
          if (uVar1 == 0x80) {
            uVar11 = func_0x01484f88(param_2,iVar7,0);
            puVar5 = (undefined8 *)(param_1 + 0x30);
            goto LAB_0179c250;
          }
          if (uVar1 != 0x90) goto LAB_0179c120;
          uVar2 = func_0x01484f98(param_2,iVar7,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
        else if (uVar1 == 0xa0) {
          uVar2 = func_0x01484f98(param_2,iVar7,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
        else {
          if (uVar1 != 0xa8) goto LAB_0179c120;
          uVar2 = func_0x01484f98(param_2,iVar7,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
      }
      else if (uVar1 < 0xdb) {
        if (uVar1 < 0xc3) {
          if (uVar1 == 0xb0) {
            uVar2 = func_0x01484f98(param_2,iVar7,0);
            *(undefined4 *)(param_1 + 0x44) = uVar2;
          }
          else if (uVar1 == 0xb8) {
            uVar11 = func_0x01484f88(param_2,iVar7,0);
            *(undefined8 *)(param_1 + 0x48) = uVar11;
          }
          else {
            if (uVar1 != 0xc2) goto LAB_0179c120;
            iVar3 = *piVar10;
            iVar8 = *(int *)(param_1 + 0x50);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar10;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_0179c318 + 0x179be6c);
LAB_0179bf78:
            func_0x034663ac(iVar8,param_2,uVar2,*puVar4);
          }
        }
        else {
          if (uVar1 < 0xd3) {
            if (uVar1 == 0xca) {
              iVar3 = *piVar10;
              iVar8 = *(int *)(param_1 + 0x54);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar10;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_0179c324 + 0x179c23c);
LAB_0179c2a8:
              func_0x036520e8(iVar8,param_2,uVar2,*puVar4);
              goto LAB_0179c2bc;
            }
            if (uVar1 == 0xd2) {
              iVar3 = *piVar10;
              iVar8 = *(int *)(param_1 + 0x58);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar10;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_0179c31c + 0x179bf7c);
              goto LAB_0179bf78;
            }
          }
          else if ((uVar1 | 2) == 0xda) {
            iVar3 = *piVar10;
            iVar8 = *(int *)(param_1 + 0x5c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar10;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
            goto LAB_0179c02c;
          }
LAB_0179c120:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else {
        if (0xf2 < uVar1) {
          if (uVar1 < 0xfb) {
            if ((uVar1 | 2) == 0xfa) {
              iVar3 = *piVar10;
              iVar8 = *(int *)(param_1 + 0x6c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar10;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20);
              goto LAB_0179c02c;
            }
          }
          else {
            if (uVar1 == 0x102) {
              iVar3 = *piVar10;
              iVar8 = *(int *)(param_1 + 0x70);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar10;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_0179c330 + 0x179c2ac);
              goto LAB_0179c2a8;
            }
            if (uVar1 == 0x10a) {
              iVar3 = *(int *)(param_1 + 0x74);
              if (iVar3 == 0) {
                iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0179c334 + 0x179c0a8));
                FUN_0179a608();
                *(int *)(param_1 + 0x74) = iVar3;
              }
              goto LAB_0179c1ec;
            }
          }
          goto LAB_0179c120;
        }
        if (uVar1 == 0xe2) {
          iVar3 = *(int *)(param_1 + 0x60);
          if (iVar3 == 0) {
            iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0179c328 + 0x179c1b0));
            func_0x017992d0();
            *(int *)(param_1 + 0x60) = iVar3;
          }
        }
        else if (uVar1 == 0xea) {
          iVar3 = *(int *)(param_1 + 100);
          if (iVar3 == 0) {
            iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0179c32c + 0x179c1dc));
            func_0x01799658();
            *(int *)(param_1 + 100) = iVar3;
          }
        }
        else {
          if (uVar1 != 0xf2) goto LAB_0179c120;
          iVar3 = *(int *)(param_1 + 0x68);
          if (iVar3 == 0) {
            iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0179c320 + 0x179bee0));
            func_0x017999e0();
            *(int *)(param_1 + 0x68) = iVar3;
          }
        }
LAB_0179c1ec:
        func_0x01484fd8(param_2,iVar3,0);
      }
LAB_0179c2bc:
      uVar1 = func_0x01484f58(param_2,iVar7,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.Merge$$.cctor RVA 0x178c338 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179c338(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_0179c920 + 0x179c34c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179c924 + 0x179c360));
    func_0x01384978(*(undefined4 *)(_UNK_0179c928 + 0x179c36c));
    func_0x01384978(*(undefined4 *)(_UNK_0179c92c + 0x179c378));
    func_0x01384978(*(undefined4 *)(_UNK_0179c930 + 0x179c384));
    func_0x01384978(*(undefined4 *)(_UNK_0179c934 + 0x179c390));
    func_0x01384978(*(undefined4 *)(_UNK_0179c938 + 0x179c39c));
    func_0x01384978(*(undefined4 *)(_UNK_0179c93c + 0x179c3a8));
    func_0x01384978(*(undefined4 *)(_UNK_0179c940 + 0x179c3b4));
    func_0x01384978(*(undefined4 *)(_UNK_0179c944 + 0x179c3c0));
    func_0x01384978(*(undefined4 *)(_UNK_0179c948 + 0x179c3cc));
    func_0x01384978(*(undefined4 *)(_UNK_0179c94c + 0x179c3d8));
    func_0x01384978(*(undefined4 *)(_UNK_0179c950 + 0x179c3e4));
    func_0x01384978(*(undefined4 *)(_UNK_0179c954 + 0x179c3f0));
    func_0x01384978(*(undefined4 *)(_UNK_0179c958 + 0x179c3fc));
    func_0x01384978(*(undefined4 *)(_UNK_0179c95c + 0x179c408));
    func_0x01384978(*(undefined4 *)(_UNK_0179c960 + 0x179c414));
    func_0x01384978(*(undefined4 *)(_UNK_0179c964 + 0x179c420));
    func_0x01384978(*(undefined4 *)(_UNK_0179c968 + 0x179c42c));
    func_0x01384978(*(undefined4 *)(_UNK_0179c96c + 0x179c438));
    func_0x01384978(*(undefined4 *)(_UNK_0179c970 + 0x179c444));
    func_0x01384978(*(undefined4 *)(_UNK_0179c974 + 0x179c450));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0179c978 + 0x179c464);
  **(undefined4 **)(*piVar7 + 0x5c) = **(undefined4 **)(_UNK_0179c97c + 0x179c474);
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  iVar2 = **(int **)(_UNK_0179c980 + 0x179c4b0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 8) = uVar1;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = **(int **)(_UNK_0179c984 + 0x179c4d4);
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  uVar1 = func_0x02fdc9f0(0x5a,**(undefined4 **)(iVar2 + 0x5c),
                          **(undefined4 **)(_UNK_0179c988 + 0x179c54c));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  if (*(int *)(**(int **)(_UNK_0179c98c + 0x179c584) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = **(int **)(_UNK_0179c990 + 0x179c5a0);
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  uVar3 = func_0x02fdc9f0(0x12,**(undefined4 **)(iVar2 + 0x5c),
                          **(undefined4 **)(_UNK_0179c994 + 0x179c618));
  uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_0179c998 + 0x179c634));
  func_0x0244f944(uVar4,uVar1,uVar3,0xc2,**(undefined4 **)(_UNK_0179c99c + 0x179c654));
  iVar2 = **(int **)(_UNK_0179c9a0 + 0x179c670);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x10) = uVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = **(int **)(_UNK_0179c9a4 + 0x179c694);
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  uVar1 = func_0x02fdc9f0(0xca,**(undefined4 **)(iVar2 + 0x5c),
                          **(undefined4 **)(_UNK_0179c9a8 + 0x179c70c));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  if (*(int *)(**(int **)(_UNK_0179c9ac + 0x179c744) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = **(int **)(_UNK_0179c9b0 + 0x179c760);
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  uVar3 = func_0x02fdc9f0(0x12,**(undefined4 **)(iVar2 + 0x5c),
                          **(undefined4 **)(_UNK_0179c9b4 + 0x179c7d8));
  uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_0179c9b8 + 0x179c7f4));
  func_0x0244f944(uVar4,uVar1,uVar3,0xd2,**(undefined4 **)(_UNK_0179c9bc + 0x179c814));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x18) = uVar4;
  uVar1 = func_0x0244f970(0xda,0);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f970(0xfa,0);
  iVar2 = **(int **)(_UNK_0179c9c0 + 0x179c864);
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x20) = uVar1;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = **(int **)(_UNK_0179c9c4 + 0x179c888);
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = *(int *)(iVar6 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  uVar1 = func_0x02fdc9f0(0x102,**(undefined4 **)(iVar2 + 0x5c),
                          **(undefined4 **)(_UNK_0179c9c8 + 0x179c900));
  *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x24) = uVar1;
  return;
}


